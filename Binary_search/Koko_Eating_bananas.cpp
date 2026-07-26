#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int speed(vector<int> &arr, int h){

    int ans = 0;
    int n = arr.size();
    int maximum = *max_element(arr.begin(), arr.end());
    int low = 1, high = maximum;

    while(low <= high){
        ans = 0;
        int mid = low + (high-low)/2;

        for(int i=0; i<n; i++){

            if(arr[i] % mid != 0){

                ans += (arr[i]/mid)+1;
            }else{
                ans  += arr[i]/mid;
            }
        }

        if(ans <= h){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
}


int main(){

    vector<int> arr = {3,6,7,11};
    int h = 8;
    cout << speed(arr,h);
    return 0;
}