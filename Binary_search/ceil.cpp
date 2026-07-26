#include<iostream>
using namespace std;

int ceil(int arr[], int n, int target){

    int low = 0, high = n-1;
    while(low <= high){

        int mid = low + (high-low)/2;

        if(arr[mid] >= target){
            high = mid-1;

        }else{
            low = mid+1;
        }
    }
    if(low > n-1){
        return -1;
    }
    return arr[low];
}

int main(){
    int arr[6] = {1,2,3,5,7,9};
    cout << ceil(arr,6,10);
    return 0;
}