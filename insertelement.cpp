#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&st,int x) {
   if(st.empty()) {
    st.push(x);
    return;
   }

   int num = st.top();
   st.pop();
   solve(st,x);
   st.push(num);
   

}

stack<int> insert(stack<int>& inputstack,int x) {
    solve(inputstack,x);
    return inputstack;      

}

int main()
{
    stack<int> s; 
    s.push(22);
    s.push(43);
    s.push(44);
    s.push(46);
    s.push(50);
    
    solve(s,5);
    while(!s.empty()) {

        int ans = s.top();
        s.pop();
        cout << ans << " ";

    }
       return 0;

}