#include<iostream>
using namespace std;

bool sorted_checking(int arr[], int n){

    int low = 0, high = n-1;
  
    while(low <= high){

        if(arr[low] >= arr[low+1] || arr[high] <= arr[high-1]){
           return false;
        }
        low++;
        high--;
    }
    return true;
}


int main(){

    int arr[5] = {1,2,5,4,4};
   if(sorted_checking(arr,5)){
    cout << "Sorted";
   }else{
    cout << "Unsorted";
   }

   return 0;
}