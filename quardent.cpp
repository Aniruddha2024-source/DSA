#include<iostream>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    int y;
    cin>>y;

    if((x > 0 && y > 0) /*&& (y = 0 && x > 0) && (x = 0 && y > 0)*/) {
        cout << "lies in 1st quadrant" << endl;
    }
    else if(x==0 && y==0) {
        cout << "lies at origin" << endl;
    }
    else {
        cout << "Not" << endl;
    }
}