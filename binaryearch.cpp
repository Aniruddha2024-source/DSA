#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int s = 0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while(s<=e){

        if(arr[mid] == key) {
            return mid;
        }

        if(key > arr[mid]) {
            s = mid+1;
        }

        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main()
{
    int arr[5] = {1,5,7,12,32};
    
    cout<<"Enter the element to search : " << endl;
    int key;
    cin>>key;
    
    bool found = binarySearch(arr,5,key);
    if(found) {
        cout << "Element  is present   "  <<  endl;
    }
    else{
        cout << "Element  is not present   " <<  endl;
    }

     //cout << "Element  is present at :  " << found <<  endl;


    return 0;
}