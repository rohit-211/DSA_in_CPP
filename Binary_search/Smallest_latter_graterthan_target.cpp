#include<iostream>
#include<vector>

using namespace std;

char smallest_latter_greaterthan_target(vector<char>& latters, char target){

    int n = latters.size();
    int low = 0, high = n-1;

    while(low <= high){

        int mid = low + (high-low)/2;

        if(target >= latters[mid]){
            low = mid+1;

        }else{
            high = mid-1;
        }
    }
    if(low < 0 || low > n-1 || high < 0 || high > n-1){
        return latters[0];
    } else{
        return latters[low];
    }
}

int main(){

    vector<char> latters = {'c' , 'f' , 'j'};
    char target = 'c';
    cout << smallest_latter_greaterthan_target(latters,target);
    return 0;
}