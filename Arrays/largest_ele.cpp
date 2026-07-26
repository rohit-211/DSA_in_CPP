#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements in the array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    for(int i=0; i<n; i++){

        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << largest;

    return 0;
}