#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int> &arr, int target){

    int i =0 , j = arr.size()-1;
    while(i < j){

        if(arr[i] + arr[j] == target){
            return {i+1,j+1};
        }else if(arr[i] + arr[j] > target){
            j--;
        }else{
            i++;
        }
    }
    return {};
}

int main(){


    vector<int> arr = {2,7,9,11};
    int target = 9;
    vector<int> ans =  twosum(arr,target);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}