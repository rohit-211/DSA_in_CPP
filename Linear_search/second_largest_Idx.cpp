#include<iostream>
using namespace std;

int second_largest(int arr[], int n){

    int largestIdx = 0;
    int sec_largestIdx = -1;
    

    for(int i=1; i<n; i++){

        if(arr[i] > arr[largestIdx]){
            sec_largestIdx = largestIdx;
            largestIdx = i;
            
        }else if(arr[i] != arr[largestIdx] && (sec_largestIdx == -1 || arr[i] > arr[sec_largestIdx])){
            sec_largestIdx = i;
        }
    }
return sec_largestIdx;

}

int main(){
    int arr[5] = {1,9,10,3,11};
    cout << second_largest(arr,5);
    return 0;
}