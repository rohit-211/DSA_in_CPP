#include<iostream>
#include<vector>
using namespace std;


int max_area(vector<int> &arr){

    int maximum = 0;
    int low = 0, high = arr.size()-1;

    while(low < high){

        int w = high - low;
        int h = min(arr[low], arr[high]);
        int current = w*h;

        if(arr[low] < arr[high]){
            low++;
        }else{
            high--;
        }

        maximum = max(maximum, current);
    }
    return maximum;
}

int main(){
    vector<int> arr = {1,8,6,2,5,4,8,3,7};
    cout << max_area(arr);
    return 0;
}