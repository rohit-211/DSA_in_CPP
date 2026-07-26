#include<iostream>
#include<math.h>
using namespace std;


long long power(int base, int exp){

    long long ans = 1;
    for(int i=1; i<= exp; i++){
        ans *= base;
    }
    return ans;
}


int nth_root(int exp, int pro){

    int low = 1, high = pro;

    while(low < high){
        int mid = low + (high - low)/2;

        long long  base =  power(mid,exp);

        if(base == pro){
            return mid;
        }
        else if(base > pro){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    if(power(low,exp) == pro){
        return low;
    }else{
        return -1;
    }
}

int main(){

    cout << nth_root(5,32);
    return 0;
}