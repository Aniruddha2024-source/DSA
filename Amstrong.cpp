#include<iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;


bool check(int n , int k) {
    int sum = 0; 
    int original = n;
    while(original > 0) {
        int digit = original % 10;
        sum += round(pow(digit, k));
        original /= 10;
    }
    return sum == n;
}
    

int main()
{
    int n;
    cin>>n;

    int k;
    cin>>k;

    bool found =  check(n,k); 
    if(found)
        cout << "true" << endl;
    else
        cout << "false" << endl;

}