#include<iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number of students " << endl;
    cin >> n;
    vector<string>ans;

    int totalFemale = 0;
    int totalgrade = 0;

    while(n--) {
        string name, gender;
        char grade;
        int age;
        cout <<"Enter the details " << endl;
        cin>>name>>age>>grade>>gender;



    
    cout<<" "<< name <<" "<< age <<" "<< grade<<" "<<gender<<endl;;

    if(age>20) {
        cout << name << endl;
    }

    if(gender == "Female") {
        totalFemale++;
        totalgrade += grade;
    }



    }

    double avg = (double) (totalgrade/totalFemale);
    cout << avg << endl;


}