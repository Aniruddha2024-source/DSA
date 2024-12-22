#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void toggle(string str) {
    
    for(char ch:str) {
        if(ch >= 'a' && ch <= 'z') {
            cout <<char(toupper(ch))<<"";
           
        }
        else if(ch >= 'A' && ch <= 'Z') {
            cout <<char(tolower(ch))<<"";
        }
        else {
            cout << ch <<"";
        }
    }
    
}

int main()
{
    string str;
    getline(cin, str);

    toggle(str);
    return 0;
}

