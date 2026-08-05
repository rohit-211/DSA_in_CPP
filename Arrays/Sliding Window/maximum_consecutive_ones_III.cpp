#include<iostream>
#include<vector>

using namespace std;

int max_consecutive_ones(vector<int> &nums, int k){

   int i = 0, m_w = 0;
   for(int j = 0; j<nums.size(); j++){

        if(nums[j] != 1){
            k--;
        }
        
        while(k < 0){
            if(nums[i] == 0){
                k++;
            }
            i++;
        }
        m_w = max(m_w, j-i+1);
   }
   return m_w;
}

int main(){
    vector<int> nums = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k = 2;
    cout << max_consecutive_ones(nums,k);
    return 0;
}