#include <iostream>
#include<bits/stdc++.h>
#include <string>

using namespace std;

struct Item {
    string Name;
    double price;
    int quantity;
};
double FindAvarage(vector<Item> &items) {

    double total_sale = 0.0;
    int n = items.size();

    for(auto &item:items) {
        total_sale += item.price * item.quantity;
    }

    int avarage = total_sale/n;

    return avarage;

}

int main() 
{
    int numitems;
    cout << "Enter number of items" << endl;
    cin >> numitems;

    vector<Item>A(numitems);

    cout <<"Enter the details of the items" << endl;

    for(int i=0;i<numitems;i++) {
        cout << "Item" <<   i+1 <<  endl;
        cout << "Name" << " ";
        cin >> A[i].Name;
        cout << "Price " << " ";
        cin >> A[i].price;
        cout << "Quantity " << "   c";
        cin >> A[i].quantity;

    }

    cout << "Avg is " << FindAvarage(A) << endl;
}