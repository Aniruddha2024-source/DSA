#include<iostream>
#include<vector>
using namespace std;

void findRockSample(vector<vector<int>>ranges,int n, int r, vector<int>arr) {

    vector<int>a;
    for(int i=0;i<r;i++) {

        int cnt = 0;
        /*int l = ranges[i][0];
        int h = ranges[i][1];*/

        for(int j=0;j<arr.size();j++) {
            if(ranges[i][0] <= arr[j] &&  arr[j] <= ranges[i][1]) {
                cnt++;
            }
        }
        a.push_back(cnt);
    }

    for(int i=0;i<a.size();i++) {
        cout << a[i] << " ";
    }

}


int main() 
{ 
    int n = 5;
    int r = 2;
     
    vector<int>arr = {345, 604, 321, 433, 704, 470, 808, 718, 517, 811};
    vector<vector<int>>ranges = { { 300, 380 }, 
                                  { 400, 700 } };
     
    // Function call
    findRockSample(ranges, n, r, arr);

    return 0;
}