#include<iostream>
#include<vector>

using namespace std;

vector<int> sort_color(vector<int> &nums){

    int n = nums.size();
    int zero = 0, one = 0, two = 0;

    for(int i=0; i<n; i++){

        if(nums[i] == 0){
            zero++;
        }else if(nums[i] == 1){
            one++;
        }else{
            two++;
        }
    }
    int i =0;
    while(zero > 0){
        nums[i] = 0;
        zero--;
        i++;
    }
    while(one > 0){
        nums[i] = 1;
        one--;
        i++;
    }

    while(two > 0){
        nums[i] = 2;
        two--;
        i++;
    }
    return nums;
}


int main(){

    vector<int> nums = {2,0,2,1,1,0};
    vector<int> arr = sort_color(nums);

    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}