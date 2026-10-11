#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int >> four_sum(vector<int> & nums, int target){

    sort(nums.begin(), nums.end());
    vector<vector<int >> ans;

    int n = nums.size();
    long long int sum;

    for(int i=0; i<n-3; i++){

        if(i > 0 && nums[i] == nums[i-1]){
            continue;
        }

        for(int j=i+1; j<n-2; j++){

            if(j > i+1 && nums[j] == nums[j-1]){
                continue;
            }

            int low = j+1, high = n-1;

            while(low < high){

                sum = 1LL* nums[i] + nums[j] + nums[low] + nums[high];

                if(sum == target){
                    ans.push_back({nums[i], nums[j], nums[low], nums[high]});

                    while( low < high && nums[low] == nums[low+1]){
                        low++;
                    }

                    while(low < high && nums[high] == nums[high-1]){
                        high--;
                    }
                    low++;
                    high--;
                }else if(sum < target){
                    low++;
                }else{
                    high--;
                }
            }
        }
    }
    return ans;
}


int main(){

    vector<int> arr = {2,2,2,2,2};
    int target = 8;

    vector<vector<int>> ans = four_sum(arr,target);
    for(vector<int> triplet : ans){

        for(int x : triplet){
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}