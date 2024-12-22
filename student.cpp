#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Details {
    string name;
    int age;
    char grade;
    string gender;
};



int main() 
{
    int n;
    cin>>n;

    vector<Details>A(n);
    int totalFemale = 0;
    int totalgrade = 0;

    for(int i=0;i<n;i++) {
       

        cout<<"Name" << " "; 
        cin>>A[i].name;

        cout<<"Age" << " "; 
        cin>>A[i].age;

        cout<<"Grade" << " "; 
        cin>>A[i].grade;

        cout<<"Gender" << " "; 
        cin>>A[i].gender;

        cout<<" "<< A[i].name <<" "<< A[i].age <<" " << A[i].grade<<" "<< A[i].gender;
        cout<<endl;
    }

  
    
    cout << "Details of student those are above 20" << endl;
    for(int i=0;i<n;i++) {
        
        if(A[i].age > 20) {

            cout<<"Name"<<" "<< A[i].name<<endl;
            
        }
        
        else {
            cout << "There is no students available above 20." << endl;
        }
        
    }

    for(int i=0;i<n;i++) {
        if(A[i].gender == "Female") {
        totalFemale++;
        totalgrade += A[i].grade;
      }
    }

    double avg = (double) (totalgrade/totalFemale);
    cout << "Aavrage is : " <<endl;
    cout << avg << endl;

}