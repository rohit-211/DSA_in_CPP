#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int x;
    cout << "Enter the numbers : ";

    for(int i=0; i<n; i++){

        cin >> x;
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
    
}