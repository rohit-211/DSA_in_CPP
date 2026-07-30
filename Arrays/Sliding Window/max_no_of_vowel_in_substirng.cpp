#include<iostream>
#include<string>

using namespace std;


int vowel_count(string s, int k){

    int n = s.size();

    // changing the characters to lower case
    for(char &c : s){
        c = tolower(static_cast<unsigned char>(c));
    }

    int w_count = 0;

    for(int i=0; i<k; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i'  || s[i] == 'o' || s[i] == 'u'){
            w_count++;
        }
    }

    int max_count = w_count;

    for(int i=k; i<n; i++){

       // w_count = w_count + s[i] - s[i-k];
        if(s[i-k] == 'a' || s[i-k] == 'e' || s[i-k] == 'i' || s[i-k] == 'o' || s[i-k] == 'u'){
            w_count--;
        }

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            w_count++;
        } 

        max_count = max(max_count, w_count);

    }
    return max_count;
}

int main(){

    string s = "abciiidef";
    int k = 3;
    cout << vowel_count(s,k);
    return 0;
}