#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int> &num1, int m, vector<int> & num2, int n){

    int x = m+n;
    vector<int> merged;
    int i = m-1, j = n-1, k = x-1;
    

    while(i >= 0 && j >= 0){

        if(num1[i] > num2[j]){
            num1[k] = num1[i];
            i--;
            k--;
        }else{
            num1[k] = num2[j];
            j--;
            k--;
        }

    }

    if(j >=0){
        while(j >= 0){
            num1[k]  = num2[j];
            j--;
            k--;
        }
    }

    if(i >= 0){
        while(i >=0){
            num1[k] = num1[i];
            i--;
            k--;
        }
    }

    for(int x : num1){
        cout << x << " ";
    }
}

int main(){

    vector<int> num1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> num2 = {2,5,6};
    int n = 3;

    merge(num1,m,num2,n);
    return 0;
}