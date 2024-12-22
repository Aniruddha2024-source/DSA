#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> findNextSmallerElement(vector<int> &arr, int n) {   
    
 
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    //prev element -->  for(int i=0;i<n;i++)
    for(int i=n-1;i>=0;i--) {
        int curr = arr[i];
        while(s.top() != -1 &&  arr[s.top()] >= curr) {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }

    return ans;
}


int main() 
{
    vector<int> arr = {4, 8, 2, 1, 6, 10, 5};
    vector<int> ans = findNextSmallerElement(arr,7);
 
     
    cout << "Original Array is: ";
    for (int num : arr) {
        cout << num << " ";
    }
 
    cout << "\n Next Smaller Elements: ";
    for (int num : ans) {
        cout << (num == -1 ? -1 : num) << " ";
    }
 
    return 0;
    
       return 0;
}