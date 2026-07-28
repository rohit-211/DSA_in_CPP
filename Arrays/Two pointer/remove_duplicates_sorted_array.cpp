#include<iostream>
#include<vector>

using namespace std;

int remove_duplicates(vector<int> &arr){

    int i=0;
    for(int j=1; j<arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return i+1;
}

int main(){
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};
    cout << remove_duplicates(arr);
    return 0;
}
