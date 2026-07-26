#include<iostream>
#include<vector>
using namespace std;


vector<int> movezero(vector<int> &arr){
    int i=0;
    for(int j=i+1; j<arr.size(); j++){

        if(arr[i] !=0){
            i++;
        }

        if(arr[i] != arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return arr;
}


int main(){
    vector<int> arr = {0,1,0,3,12};
    vector<int>  ans = movezero(arr);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}