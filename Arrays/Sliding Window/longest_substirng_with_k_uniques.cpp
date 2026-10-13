#include<iostream>
#include<vector>
#include<string>
#include <unordered_map>

using namespace std;

int longest_substring(string &s, int k){

    unordered_map<char , int> f;

    int n = s.length();
    int low = 0, ans = -1, curr_len = -1;

    for(int high = 0; high < n; high++){
        
        f[s[high]]++;
        
        while(f.size() > k){

            f[s[low]]--;
            if(f[s[low]] == 0){
                f.erase(s[low]);
            }
            low++;
        }
        curr_len = high - low + 1;
        if(f.size() == k){

            ans = max(ans,curr_len);
        }
    }
    return ans;
}


int main(){

    string s = "aabacbebebe";
    int k = 3;

    cout << longest_substring(s,k);
    return 0;
}