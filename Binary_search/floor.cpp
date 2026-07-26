#include<iostream>
using namespace std;

int floor(int arr[], int n, int target){

    int low =0, high = n-1;
    while(low <= high){

        int mid = low + (high-low)/2;

        if(arr[mid] <= target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    if(high < 0){
        return -1;
    }
    return arr[high];
}


int main(){
    int arr[6] = {1,2,3,5,7,9};
    cout << floor(arr,6,6);
    return 0;
}