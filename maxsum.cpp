#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findMaxSum(vector<int>arr , int n) {
    int MaxSum = 0;
    int currSum = 0;

    for(int i=0;i<n;i++) {
        currSum = currSum + arr[i];
        if(currSum < 0 ) {
            currSum = 0;
        }
        if(currSum > MaxSum) {
            MaxSum = max(MaxSum,currSum);
        }
        
    } 
    
    return MaxSum;
}


int main() 
{
    int n;
    cin>>n;

    vector<int>ans(n);
    for(int i=0;i<ans.size();i++) {
        cin>>ans[i];
    }

    cout << findMaxSum(ans,n) << " ";
}