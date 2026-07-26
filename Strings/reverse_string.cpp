#include<iostream>
#include<string>
using namespace std;


int main(){

    string s;
    cout << "Enter the string : ";
    cin >> s;

    int i=0, j=s.length()-1;
    while(i < j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }

    for(int i=0; i<s.length(); i++){
        cout << s[i] << " ";
    }
    return 0;
}