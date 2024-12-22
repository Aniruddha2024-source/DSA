#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int findSmallestandLargest(vector<int>arr, int n){
    /*sort(arr.begin(), arr.end());

    //for(int i=0;i<n;i++) {
        cout << arr[0] << " ";
        cout << arr[n-1] << " ";
    //}*/

    int small = INT_MAX;
    for(int i=0;i<n;i++) {
        if(arr[i] < small) {
            small = arr[i];
        }
    }

    cout << small << endl;

}


int main()
{
    int n;
    cin>>n;

    vector<int>ans(n);
    for(int i=0;i<n;i++) {
        cin >> ans[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++) {
        cout << ans[i] << endl;
    }

    cout << "Smallest element is  : " << " ";

    findSmallestandLargest(ans , n);
}