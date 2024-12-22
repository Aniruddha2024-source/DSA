#include<iostream>
using namespace std;

int factorial(int n) {
    
    if(n==0 || n==1) {
        return 1;
    }

    return n * factorial(n-1);
    
}

int students(int n, int r) {

    int ncr = factorial(n) / factorial(n-r);
    return ncr;
}

int main() 
{
    int n;
    cin>>n;

    int r;
    cin>>r;

    int p = students(n,r);

    cout << p << endl;

    return 0;
    
}