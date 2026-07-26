#include<iostream>
using namespace std;

int integer_sqrt(int n){

    if(n <=0){
        return -1;
    }
    int low = 0, high = n;
    int ans=-1;

    while(low <= high){

        int mid = low + (high-low)/2;

        if(1LL*mid*mid <= n){
            ans = mid;
            low = mid+1;
            
        }else{

            high = mid-1;
        }
    }
    return ans;
}

int main(){
    int n = 4;
    cout << integer_sqrt(n);
    return 0;
}