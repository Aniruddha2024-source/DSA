#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    vector<string>A(n);

    for(int i=0;i<n;i++) {
        cin >> A[i];
    }

    for(int i=0;i<n;i++) {
        cout << A[i] << " ";
    }

    unordered_map<string,int> mpp;
    for(const string& i : A) {
        mpp[i]++;
    }

    cout << endl;
    for(auto it:mpp) {
        if(it.second == 1) {
            cout << it.first << " ";
        }
    }
}