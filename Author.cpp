#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

struct Author {
    string name;
    int booksPublished;
    double salary;
};



int main() {
    int numAuthors;
    cin >> numAuthors;// You can adjust this based on your requirements

      if (numAuthors <= 0) {
        cout << "Invalid input. Please enter a positive number of authors.\n";
        return 1; // Exit with an error code
    }

    vector<Author> A(numAuthors);

    // Input details for each author
    cout << "Enter details for Author " << /*i + 1 <<*/ ":\n";
    for (int i = 0; i < numAuthors; i++) {
        
        cout << "Name: ";
        cin >> A[i].name;
        cout << "Books Published: ";
        cin >> A[i].booksPublished;
        cout << "Salary: ";
        cin >> A[i].salary;
    }

    // Display the entered details
    cout << "\nAuthor Details:\n";
    for (int i = 0; i < numAuthors; i++) {
        cout << "Item" << /*i + 1 << */":\n";
        cout << "Name: " << A[i].name << "\n";
        cout << "Books Published: " << A[i].booksPublished << "\n";
        cout << "Salary: " << A[i].salary << "\n\n";
    }

    return 0;
}

