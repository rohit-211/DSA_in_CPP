#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int target){

    int low = 0, high = n-1;
    while(low <= high){

        int mid = low + (high-low)/2;

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] > target){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}


int main(){

    int arr[8] = {1,2,3,4,5,6,7,8};
    cout << binarysearch(arr,8,9);
    return 0;
}