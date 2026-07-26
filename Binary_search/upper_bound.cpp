#include<iostream>
using namespace std;

int upper_bound(int arr[], int n, int target){

    int low = 0, high = n-1;
    while(low <= high){

        int mid = low + (high-low)/2;

        if(arr[mid] > target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
}

int main(){

    int arr[7] = {1,2,2,2,3,5,7};
    cout << upper_bound(arr,7,2);
    return 0;
}