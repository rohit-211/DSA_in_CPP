#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cout << "Enter the string : ";
    cin >> s;

    sort(s.begin(), s.end());
    
    int i=0;
    int count = 1;
    for(int j=i+1; j<=s.length(); j++){

        if(s[i] != s[j]){
            cout << s[i] << " -> " << count << endl;
            count = 1;
            i=j;
        }else{
            count++;
        }
    }
    return 0;
}