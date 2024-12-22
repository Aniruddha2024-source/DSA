#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    cout << str <<endl;
    bool alphabet = false;

    for(char ch : str) {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            alphabet = true;
        }
        else {
            alphabet = false;
        }
    }

    if(alphabet) {
        cout << "alphabet charecter" << endl;
    }
    else {
        cout << "Not alphabet charecter" << endl;
    }

    return 0;
   
}