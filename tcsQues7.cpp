#include<iostream>
#include<bits/stdc++.h>
#include<sstream>

using namespace std;

int replaceNumbers(vector<string>& arr) {

    for(auto n : arr) {
        int x = stoi(n);

        if(x % 3 == 0 && x % 5 == 0) {
            cout << "ThreeFive" << endl;
        }
        else if(x % 3 == 0) {
            cout << "Three" << endl;
        }
        else if(x % 5 == 0) {
            cout << "Five" << endl;
        }
        else {
            cout << x << endl;
        }


    }
    
}

int main()
{
    int n; 
    cin>>n;
    cin.ignore();
    string input;
    getline(cin,input);

    input.erase(remove(input.begin(), input.end(), '['), input.end());
    input.erase(remove(input.begin(), input.end(), ']'), input.end());

    stringstream ss(input);
    vector<string> ans;
    string element;

    while(ss >> element) {
        ans.push_back(element);
    }

    replaceNumbers(ans); 
    return 0;


}