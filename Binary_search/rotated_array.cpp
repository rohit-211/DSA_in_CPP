#include<iostream>
using namespace std;

int rotated(int arr[], int n, int target){

    int low = 0, high = n-1;
    while(low <= high){

        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            return mid;


        }else if(arr[mid] >= arr[low]){

            if(arr[low] <= target && target < arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }

        }else{

            if(arr[mid] < target && target <= arr[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

    }

    return -1;
}


int main(){

    int arr[7] = {4,5,6,7,1,2,3};
    cout << rotated(arr,7,1);
    return 0;
}