#include<iostream>
using namespace std;

int frequency_count(int arr[], int n, int target){

    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[5] = {1,5,6,5,1};
    cout << frequency_count(arr,5,5);
    return 0;
}