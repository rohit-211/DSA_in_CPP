#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> squares(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n,0); 

    int i=0, j = n-1;
    int k = n-1;
    while(i<j){

        if(arr[i]*arr[i] > arr[j]*arr[j]){
            ans[k] = arr[i]*arr[i];
            k--;
            i++;
        }else{
            ans[k] = arr[j]*arr[j];
            k--;
            j--;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {-4,-1,0,3,10};
    vector<int> ans = squares(arr);

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}