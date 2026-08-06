#include<iostream>
#include<vector>

using namespace std;

int longest_subarray(vector<int> &nums){

    int n = nums.size();
    bool flag = false;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == 0){
            flag =  true;
            break;
        }
    }
    if(flag == false){
        return n-1;
    }

    int i=0, max_win = 0, del=1;
    for(int j=0; j<n; j++){

        if(nums[j] == 0){
            del--;
        }

        while(del < 0){

            if(nums[i] == 0){
                del++;
            }
            i++;
        }
        max_win = max(max_win, j-i+1);
        
    }
   return max_win-1;
}

int main(){

    vector<int> nums = {0,1,1,1,0,1,1,0,1};
    cout << longest_subarray(nums);
    return 0;
}