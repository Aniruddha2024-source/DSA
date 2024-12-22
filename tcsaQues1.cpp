#include<iostream>
using namespace std;

int main() 
{
     
    int n,m;
    cin >> n >> m;
    int sum = 0;
    for(int i=n;i<=m;i++) {
        sum = sum + (i*i*i);
    }

    cout << sum << " ";

}