#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int target){


    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1,8,9,3,6};
    cout << linearsearch(arr,5,0);
    return 0;
}