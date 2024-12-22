#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Sumofuniqueelement(vector<int>arr, int n) {
    unordered_map<int,int>mpp;
    int sum = 0;

    for(int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }

    for(auto it:mpp) {
        if(it.second == 1) {
            sum = sum + it.first;
        }
    
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    vector<int>ans(n);
    for(int i=0;i<n;i++) {
        cin>>ans[i];
    }

    cout << Sumofuniqueelement(ans,n) << " ";
}