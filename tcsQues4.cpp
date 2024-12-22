#include <iostream>
#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main() 
{
    string s;
    getline(cin, s);
    vector<string> l;
    string token;
    istringstream iss(s);

    while (iss >> token) {
        l.push_back(token);
    }

    int k = stoi(l[0]); // Number of top entries to display (if needed)
    int n = stoi(l[1]); // Total number of entries
    vector<pair<int, string>> arr;

    for (int i = 2; i < l.size(); i += 2) { // Start from index 2
        int marks = stoi(l[i]);
        string name = l[i + 1];
        arr.push_back(make_pair(marks, name));
    }

    unordered_map<int, string> mpp;

    for (auto& it : arr) {
        mpp[it.first] = it.second;
    }

    // Counter to skip the first two elements
    

    for (auto& i : mpp) {
       // if (count >= 2) { // Start printing from the 3rd element
            cout << i.second << " : " << i.first << endl;
       // }
     
    }

    // If you want to sort and display the top k entries
    /* sort(arr.begin(), arr.end(), greater<pair<int, string>>());

    for (int i = 0; i < k && i < arr.size(); i++) {
        cout << arr[i].second << " : " << arr[i].first << endl;
    } */

    return 0;
}