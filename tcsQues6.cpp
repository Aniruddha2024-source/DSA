#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> sequence(int n) {

    vector<int> arr;
    arr.push_back(n);
    while(n != 1) {
        if(n%2 == 0) {
            n /= 2;
        }
        else {
            n = 3*n + 1;
        }
        arr.push_back(n);
    }

    return arr;


}

int  maxlength(int n) {
    int maxLen = 0;
    int kvalue = 0;

    for(int i=1;i<=n;i++) {
        vector<int> arr1 = sequence(i);
        int currmax =  arr1.size();
        if(currmax > maxLen) {
            maxLen = currmax;
            kvalue = i;
        }
        
    }
    cout << maxLen <<" "<< kvalue << endl;

}



int main()
{
    int n;
    cin>>n;

    vector<int> ans = sequence(n);
    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }

    maxlength(n);

    return 0;
}



