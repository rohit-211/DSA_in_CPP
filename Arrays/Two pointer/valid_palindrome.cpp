#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

bool palindome(string str){

    

    int i=0, j = str.length()-1;

    while(i < j){

        while(i < j && !isalnum(str[i])){
            i++;
        }

        while(i < j && !isalnum(str[j])){
            j--;
        }

        if(tolower(str[i]) != tolower(str[j])){
            return false;
        }
        i++;
        j--;
    }
    return true;
}


int main(){

    string str = "A man, a plan, a canal: Panama";
    cout << palindome(str);
    return 0;
}