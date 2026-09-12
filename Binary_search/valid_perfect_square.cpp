#include<iostream>
using namespace std;

bool valid_perfect_square(int num){

    if(num == 1){
        return true;
    }

    int low = 1, high = num/2;

    while(low <= high){

        long long int mid = low + (high-low)/2;

        if(mid*mid == num){
            return true;
        }else if(mid * mid > num){
            high = mid-1;
        }else{
            low=mid+1;
        }
    }
    return false;
}

int main(){
    cout << valid_perfect_square(9);
    return 0;
}