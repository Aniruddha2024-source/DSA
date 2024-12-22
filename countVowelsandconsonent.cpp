#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int count(string str) {
    int vowl = 0,  digit = 0 ,  specialchar = 0;
    int consonant = 0;
    int n = str.length();
    int i;

    for(int i=0;i<n;i++) {
        char ch = str[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

            ch = tolower(ch);

            if(ch =='a' || 
            ch == 'e' || 
            ch == 'i' || 
            ch == 'o' || 
            ch == 'u') {
                vowl++;
            }
            else {
                consonant++;
            }
        }
        else if(ch >= '0' && ch <= '9') {
            digit++;
        }
        else {
            specialchar++;
        }
    }
    cout << vowl << endl;
    cout << consonant << endl;
    cout << digit << endl;
    cout << specialchar << endl;
}

int main() 
{
    string str = "I Geeks for geeks 243";
    count(str);
    return 0;
}