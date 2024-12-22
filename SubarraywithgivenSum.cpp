#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int SubbArray(vector<int>arr, int k) {
    int cnt = 0;
    int n = arr.size();
    int prefixSum = 0;
    unordered_map<int,int>m;
    m[0] = 1;
    for(int i=0;i<n;i++) {
        prefixSum += arr[i];
        int remove = prefixSum - k;
        cnt += m[remove];
        m[prefixSum] += 1;
    }
    return cnt;
}












int main() 
{
    int n;
    cin>>n; 
    int k;
    cin>>k;

    vector<int>ans(n);
    for(int i=0;i<n;i++) {
        cin >> ans[i];
    }


    cout << "ans is " << SubbArray(ans, k) << " ";


    
    
}