#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++) {
        int minimumIndex = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[minimumIndex]) {
                minimumIndex = j;
            }
        }
       swap(arr[minimumIndex], arr[i]);
    }
    
}
int main() 
{
    int arr[5] = {64,25,12,11,22};
    int n = 5;

    selectionSort(arr,n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}