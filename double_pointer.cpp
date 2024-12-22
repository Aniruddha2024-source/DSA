#include<iostream>
using namespace std;

void update(int **p)
{
    //p = p + 1;


    //*p = *p + 1;


    **p = **p + 1;
}

int main() 
{
    int i=5;
    int* p = &i;
    int** p2 = &p;

    /*cout << "printing i : " << i << endl;
    cout << "Address of  i : " << &i << endl;

    cout << "printing p : " << p << endl;
    cout << "Address of  p : " << &p << endl;

    cout << "printing p2 : " << p2 << endl;
    cout << "Address of  p2 : " << &p2 << endl;
    */
    //cout << *p << endl;
    //cout << **p2 << endl;

    /*cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;*/

    /*cout << &p << endl;
    cout << p2 << endl;*/


    cout << "before : " << i << endl;
    cout << "before : " << p << endl;
    cout << "before : " << p2 << endl;

    update(p2);
    cout << endl;
    cout << "After  : " << i << endl;
    cout << "After : " << p << endl;
    cout << "After : " << p2 << endl;


    return 0;
}