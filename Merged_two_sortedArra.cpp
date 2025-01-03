#include<iostream>
using namespace std;

void mergedArray(int arr1[], int m, int arr2[], int n, int arr3[]) 
{
    int i=0, j=0;
    int k=0;
    while(i<m && j<n) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++]; 
        }
        else {
            arr3[k++] = arr2[j++];
        }
    }

    while(i<m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        }
    }

    while(j<n) {
        if(arr1[i] > arr2[j]) {
            arr3[k++] = arr2[j++];
        }
    }
}

void print(int arr[], int size) {
    for(int i=0;i<size;i++) {
        cout << arr[i] << endl;
    }
    cout<<endl;
}



int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {6,7,8};

    int arr3[8] = {0};

    mergedArray(arr1,5,arr2,3,arr3);

    print(arr3,8);
    return 0;
}