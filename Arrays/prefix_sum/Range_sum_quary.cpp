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
    for(int i = 1; i< n; i++){
        prefix[i] = prefix[i-1]+nums[i];
    }

    return prefix;
}

int range_sum_quary(vector<int> &prefix, int L, int R){

    if(L==0){
        return prefix[R];
    }else if(R >= prefix.size()){
        return -1;
    }else {
        return prefix[R]-prefix[L-1];
    }

    
}

int main(){

    vector<int> nums = {3,1,5,2,4};
    vector<int> ans = build_prefix_sum(nums);
    cout << range_sum_quary(ans,0,2);
    return 0;
}