#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int smaller_sum(vector<int> &arr, int sum){

    int n = arr.size();

    sort(arr.begin(), arr.end());
    int count = 0;

    for(int i=0;i<n-2; i++){
        int ans =  0;
        int low = i+1, high = n-1;

        while(low < high){
            ans = arr[i] + arr[low] + arr[high];

            if(ans < sum){
                count += high - low;
                low++;
            }else{
                high--;
            }
        }
    }
    return count;
}

int main(){

    vector<int> arr = {-2,0,1,3};
    int sum = 2;

    cout << smaller_sum(arr,sum);
    return 0;
}