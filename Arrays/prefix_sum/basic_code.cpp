#include<iostream>
#include<vector>

using namespace std;

vector<int> prefix_sum(vector<int> &nums){

    int n = nums.size();
    vector<int> sum(n);
    sum[0] = nums[0];
    for(int i=1; i<nums.size(); i++){
        sum[i] = sum[i-1]+nums[i];
    }
    return sum;
}

int main(){
    vector<int> nums = {3,1,5,2,4};
    vector<int> result = prefix_sum(nums);

    for(int x : result){
        cout << x << " ";
    }
    return 0;
}