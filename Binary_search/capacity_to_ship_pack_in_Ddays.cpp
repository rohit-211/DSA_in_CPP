#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int capacity(vector<int> &arr, int d){

    int maxi=0;
    for(int i=0; i<arr.size(); i++){
        maxi += arr[i];
    }
    int low = *max_element(arr.begin(), arr.end()), high = maxi; 
    
    
    while(low <= high){
        int sum=0, count = 1;

        int mid = low + (high - low)/2;
        for(int i=0; i<arr.size(); i++){

            if(sum + arr[i] <= mid){
                sum += arr[i];
            }else{
                sum = 0;
                sum += arr[i];
                count++;
            }
            
        }

        if(count <= d){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return low;
}


int main(){

    vector<int> arr = {3,2,2,4,1,4};
    int d = 3;
    cout << capacity(arr,d);
    return 0;
}