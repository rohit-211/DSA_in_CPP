#include<iostream>
#include<vector>

using namespace std;

vector<int> build_prefix_sum(vector<int> &nums){

    int n = nums.size();
    if(n==0){
        return {};
    }
    vector<int> prefix(n);
    prefix[0] = nums[0];

    for(int i = 1; i<n; i++){
        prefix[i] = prefix[i-1]+nums[i];
    }
    return prefix;
}

int subarray_sum(vector<int> prefix, int k){
    int n = prefix.size(), count = 0;

    for(int i=0; i<n; i++){
        if(prefix[i] == k){
            count++;
        }
        for(int j=i+1; j<n; j++){
            if(prefix[j]-prefix[i]==k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {1,2,3};
    vector<int> ans = build_prefix_sum(nums);

    cout << subarray_sum(ans,3);
    return 0;
}