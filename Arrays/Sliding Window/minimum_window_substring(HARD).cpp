#include<iostream>
#include<vector>
#include<string>
#include<climits>

using namespace std;

bool check(vector<int> &have, vector<int> &need){

    for(int i=0; i<256; i++){

        if(have[i] < need[i]){
            return false;
        }
    }
    return true;
}

string min_window(string s, string t){
    
    int n = s.length();
    int m = t.length();

    vector<int> have(256,0);
    vector<int> need(256,0);

    if(n < m){
        return "";
    }

    for(int i=0; i<m; i++){
        need[t[i]]++;
    }

    int low=0;
    int res = INT_MAX, st = -1;

    for(int high=0; high<n; high++){

        have[s[high]]++;

        while(check(have,need)){

            int len = high - low + 1;
            if(res > len){
                res =len;
                st = low;
            }

            have[s[low]]--;
            low++;
        }
    }

    if(res == INT_MAX){
        return "";
    }
    return s.substr(st,res);
}


int main(){

    string s = "ADOBECODEBANC";
    string t = "ABC";

    cout << min_window(s,t);
    return 0;
}