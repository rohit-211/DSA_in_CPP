#include<iostream>
using namespace std;

int last_Occurence(int arr[], int n, int target){

    int low = 0, high = n-1;
    int ans = -1;

    while(low <= high){

        int mid = low + (high-low)/2;

        if(arr[mid] == target){
            ans = mid;
            low = mid + 1;   // Search on the right
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return ans;
}

int main(){

    int arr[8] = {1,2,2,2,3,4,5,6};
    cout << last_occurence(arr,8,2);
    return 0;
}