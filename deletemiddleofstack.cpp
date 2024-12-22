#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputstack, int count,  int size) {
    if(count == size/2) {
        inputstack.pop();
        return;
    }

    int num = inputstack.top();
    inputstack.pop();
    solve(inputstack, count+1, size);

    inputstack.push(num);

}
void deleteMiddle(stack<int>&inputstack, int N) {
    int count = 0;
    solve(inputstack, count, N );
}

int main()
{
    stack<int> s;

    s.push(22);
    s.push(43);
    s.push(44);
    s.push(46);
    s.push(50);
    
    
    deleteMiddle(s,5);    
    
    while(!s.empty()) {
        
      int ans = s.top();
      s.pop();
      cout << "stack elements are : " << ans << endl;
    }

    return 0;
}