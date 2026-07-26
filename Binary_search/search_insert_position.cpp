#include<iostream>
using namespace std;

int search_insert_position(int arr[], int n, int target){

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
    return low;
}


int main(){

    int arr[4] = {1,3,5,7};
    cout << search_insert_position(arr,4,6);
    return 0;
}