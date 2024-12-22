#include<iostream>
#include <functional> 
#include <algorithm>
using namespace std;

int abc(int arr[], int n )
{
    int m=0;
    sort(arr, arr + n);
    for(int i=0;i<n;i++) {
        if(arr[i] == arr[i+1]) {
            m = arr[i];
            i++;
        }
        
    }
    cout << m << " ";
    //return m;
}

int main()
{
    int arr[5] = {3,1,3,4,2};
    int n = 5;
    
    abc(arr,n);

    
    
    
    
    return 0;

}