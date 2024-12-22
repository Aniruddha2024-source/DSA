#include<iostream>
using namespace std;

int main() 
{
    //int arr[5] = {1,3,5,7,8};
    /*cout << arr << endl;
    cout << &arr[0] << endl;
    cout << arr[0] << endl;
    cout << *arr << endl;
    cout << *arr + 1 << endl;

    cout << *(arr+1) << endl;
    cout << *(arr) +1 <<endl;
    
    int  i = 3;
    cout << i[arr] << endl;

    int  temp[10] = {1,3};
    cout << sizeof(temp) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;

    int *ptr = &temp[0];

    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;*/

    int a[20] = {1,3,4,5};
    cout << &a[0] << endl;

    int *p = &a[0];
    cout << p <<endl;
    cout << *p << endl;
    cout << &p << endl;

    return 0;
}