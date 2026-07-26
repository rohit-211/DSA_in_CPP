#include<iostream>
using namespace std;

int first_Occurence(int arr[], int n, int target){

    int st = 0, end = n - 1;
    int ans;

    while(st <= end){

        int mid = st + (end - st) / 2;

        if(arr[mid] == target){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }

    return ans;
}


int main(){

    int arr[8] = {1,2,2,2,3,4,5,6};
    cout << first_occurence(arr,8,2);
    return 0;
}