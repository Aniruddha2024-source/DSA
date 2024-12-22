#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int sum(vector<int>arr) {
    int n = arr.size();
    unordered_map<int,int>mpp;
    int sum=0;
    for(auto i:arr) {
        mpp[i]++;
    }

    for(auto it:mpp) {
        if(it.second != 1) {
            sum += it.first;
        }
    }


    cout << "sum is " << sum << " ";
}

int main()
{
    int N;
    cin>>N;

    vector<int>arr1(N);

    for(int i=0;i<N;i++) {
        cin>>arr1[i];
    }

    sum(arr1);
    return 0;
}