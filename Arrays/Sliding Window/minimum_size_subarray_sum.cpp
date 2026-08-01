#include<iostream>
#include<vector>

using namespace std;

int minimum_subarray_sum(int target, vector<int> &nums){

   
    int left = 0, right = 0;
    int sum = nums[left];

    while(sum < target && right < nums.size()-1){
        right++;
        sum += nums[right];
    }
    if(sum < target){
        return 0;
    }

    int ans = right - left + 1;
    

    while(right < nums.size()){

        if(sum - nums[left] >= target){
            sum -= nums[left];
            left++;

            if(right - left + 1 < ans){
                ans = right - left + 1;
                
            }
        }else{

            if(right < nums.size()-1){
                right++;
            sum += nums[right];
        }else{
            right++;
        }
    }
    return ans;
}
}

int main(){
    vector<int> nums = {2,3,1,2,4};
    int target = 7;
    cout << minimum_subarray_sum(target,nums);
    return 0;
}