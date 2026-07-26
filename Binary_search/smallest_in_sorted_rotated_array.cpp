#include<iostream>
using namespace std;

int smallest(int arr[], int n){

    int low = 0, high = n-1;
    while(low < high){

        int mid = low + (high-low)/2;

        if(arr[mid] > arr[high]){
            low = mid+1;
        }else{
            high = mid;
        }
    }
    return arr[low];
}

int main(){

    int arr[7] = {4,5,6,7,1,2,3};
    cout << smallest(arr,7);
    return 0;
}