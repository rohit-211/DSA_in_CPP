#include<iostream>
using namespace std;

int peak_element(int arr[], int n){

    int low = 0, high = n-1;
    while(low <= high){

        int mid = low + (high-low)/2;
        if(low == high ){
            return low;
        }else if(arr[mid] > arr[mid+1]){
            high =mid;
        }else if(arr[mid] < arr[mid+1]){
            low = mid+1;
        }
    }
    return -1;
}


int main(){
    int arr[5]  = {1,2,3,4,5};
    cout << peak_element(arr,5);
    return 0;
}