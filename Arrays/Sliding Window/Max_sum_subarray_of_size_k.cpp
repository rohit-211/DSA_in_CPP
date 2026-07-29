#include<iostream>
#include<vector>

using namespace std;

int max_sum(vector<int> &arr, int k){
    int n = arr.size();
    int windowsum = 0;

    for(int i=0; i<k; i++){
        windowsum += arr[i];
    }

    int maxsum = windowsum;
    for(int i=k; i<n; i++){
        windowsum = windowsum + arr[i] - arr[i-k];
        maxsum = max(maxsum,windowsum);
    }
    return maxsum;
}

int main(){

    vector<int> arr = {2,1,5,1,3,2};
    int k = 3;
    cout << max_sum(arr,k);
    return 0;
}