#include<iostream>
#include<vector>

using namespace std;

vector<int> runningsum(vector<int> &nums){

    int n = nums.size();

    if(n==0){
        return {};

    }

    vector<int> result(n);

    result[0]= nums[0];
    for(int i=1; i<n; i++){
        result[i] = result[i-1] + nums[i];
    }
    return result;
}

int main(){

    vector<int> nums = {1,2,3,4,5};
    vector<int> ans = runningsum(nums);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}