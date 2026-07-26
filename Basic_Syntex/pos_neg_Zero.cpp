#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter the number : ";
    cin >> x;

    if(x > 0){
        cout << "Positive";
    }else if(x < 0){
        cout << "Negative";
    }else{
        cout << "Zero";
    }
    return 0;
}