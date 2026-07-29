#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> three_sum(vector<int> &arr){
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size()-2; i++){

        if(i > 0 && arr[i] == arr[i-1]){
            continue;
        }

        int st = i+1, end = arr.size()-1;

        while(st < end){

            if(arr[i] + arr[st] + arr[end] == 0){
                ans.push_back({arr[i],arr[st],arr[end]});

                while(st < end && arr[st] == arr[st+1]){
                    st++;
                }

                while(st < end && arr[end] == arr[end-1]){
                    end--;
                }
                st++;
                end--;
            }else if(arr[i] + arr[end] + arr[st] > 0){
                end--;
            }else{
                st++;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,-1,0,-1,2,-4};
    vector<vector<int>> result = three_sum(arr);

    for(vector<int> triplet : result){
        
        for(int x : triplet){
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}