#include<iostream>
#include<unordered_set>
#include<string>

using namespace std;

int largest_substring(string s){

    unordered_set<char> st;
    int left = 0, ans = 0, count = 0;

    for(int right = 0; right < s.size(); right++){

        if(st.count(s[right])){
            while(st.count(s[right]) == 1){
                st.erase(s[left]);
                left++;
                count--;
            }
            st.insert(s[right]);
            count++;
            ans = max(count,ans);
        }else{

            st.insert(s[right]);
            count++;
            ans = max(count, ans);
        }
    }
    return ans;
}


int main(){
    string s = "pwwkew";
    cout << largest_substring(s);
    return 0;
}

