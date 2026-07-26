#include<iostream>
#include<string>
using namespace std;


int main(){
    string s;
    bool flag = false;

    cout << "Enter the string : ";
    cin >> s;

    int i=0, j=s.length()-1;
    while(i < j){
        if(s[i] != s[j]){
            flag = true;
        }
        i++;
        j--;
    }

    if(flag){
        cout << "Not Palindrome";
    }else{
        cout << "Palindrome";
    }

    return 0;
}