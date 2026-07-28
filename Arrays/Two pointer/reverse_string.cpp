#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<char> reverse(vector<char> &s){

    int i =0, j=s.size()-1;

    while(i< j){
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    return s;
} 

int main(){

    vector<char> s = {'h','e','l','o'};
    vector<char> ans = reverse(s);

    for(char X : ans){
        cout << X << " ";
    }
    return 0;
}