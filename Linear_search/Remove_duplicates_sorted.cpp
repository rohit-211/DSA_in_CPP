#include<iostream>
using namespace std;

int main(){

    int arr[8] = {1,1,2,2,3,4,4,5};
    int i =0;
    
    for(int j=1; j<8; j++){

        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }

    for(int j=0; j<=i; j++){
        cout << arr[j] << " ";
    }
    return 0;


}