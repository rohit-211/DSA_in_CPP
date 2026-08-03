#include<iostream>
#include<vector>
#include<string>

using namespace std;

int char_replacement(string s, int k){

    vector<int> freq(26,0);

    int left = 0, maxfreq = 0, ans = 0;

    for(int right = 0; right<s.size(); right++){

        freq[s[right] - 'A']++;
        maxfreq = max(maxfreq, freq[s[right]-'A']);

        while((right-left+1) - maxfreq > k){
            freq[s[left] - 'A']--;
            left++;
        }
        ans = max(ans, right-left+1);
    }
    return ans;
}

int main(){

    string s = "AABABBABA";
    int k = 2;
    cout << char_replacement(s,k);
    return 0;
}