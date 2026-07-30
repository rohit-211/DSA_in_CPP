#include<iostream>
#include<vector>

using namespace std;

float max_avg(vector<int> &arr, int k){

    int n = arr.size();
    float window_avg = 0;
    for(int i=0; i<k; i++){

        window_avg += (arr[i]);
    }

    float maximum_avg = window_avg;

    for(int i=k; i<n; i++){
        window_avg = window_avg + (arr[i]) - (arr[i-k]);
        maximum_avg = max(maximum_avg,window_avg);
    }
    return (float)maximum_avg/k;
}


int main(){
    vector<int> arr = {1,12,-5,-6,50,3};
    int k = 4;
    cout << max_avg(arr,k);
    return 0;
}