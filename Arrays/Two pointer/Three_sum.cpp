#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> three_sum(vector<int> &arr){
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i=0; i<arr.size()-2; i++){

        int st = i+1, end = arr.size()-1;

        while(st < end){

            if(arr[i] + arr[st] + arr[end] == 0){
                ans.push_back({arr[i],arr[st],arr[end]});
                st++;
                end--;
            }else if(arr[i] + arr[end] + arr[st] > 0){
                end--;
            }else{
                st++;
            }
        }
    }
    return ans;
}