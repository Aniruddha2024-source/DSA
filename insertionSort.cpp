#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) 
{
    for(int i=1;i<n;i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0;j--) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        swap(arr[j+1],temp);
    }
}

int main() 
{
    int arr[5] = {4,2,1,7,3};
    int size = 5;

    selectionSort(arr,size);
    for(int i=0;i<size;i++) {
        cout <<arr[i] << " ";
    }
    cout<<endl;


    return 0;
}