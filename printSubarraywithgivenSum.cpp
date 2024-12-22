#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void findSubarray(vector<int>& arr,   int target) {
    unordered_map<int,int> m;
    int n = arr.size();
    int currSum=0;

    for(int i=0;i<n;i++) {
        currSum += arr[i];
        if(currSum == target) {
            for(int j=0;j<=i;j++) {
                cout<<arr[j]<<" ";
            }
        } 
        if(m.find(currSum-target) != m.end()) {
            int s = m[currSum-target]+1;
            for(int k=s;k<=i;k++) {
                cout << arr[k] << " "; 
            }
            cout << endl;
        }
        m[currSum] = i;
    }
}

int main() 
{
    


    /*int N;
    cin>>N;

    int t;
    cin>>t;

    vector<int>ans(N);

    for(int i=0;i<N;i++) {
        cin>>ans[i];
    }*/


    vector<int> ans = {2,3,5,1,5};

    int N = ans.size();
    int t = 10;
    

    findSubarray(ans,t);
    return 0;

}