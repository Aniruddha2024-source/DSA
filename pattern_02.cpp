/*#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row) {
            cout << "*";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}*/



#include<iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++) {
            cout <<"*" << " ";
        }
        cout << endl;
    }
    return 0;
}