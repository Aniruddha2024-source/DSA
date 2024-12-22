#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&st, int element) {
   
   if(st.empty()) {
    st.push(element);
    return;
   }

   int num = st.top();
   st.pop();
   solve(st,element);
   st.push(num);
}

void reverse(stack<int>& inputstack) {
    if(inputstack.empty()) {
        return;
    }
    int n = inputstack.top();
    inputstack.pop();      
    reverse(inputstack);
    solve(inputstack,n);

}

int main()
{
    stack<int> s; 
    s.push(22);
    s.push(43);
    s.push(44);
    s.push(46);
    s.push(50);
    
    reverse(s);
    while(!s.empty()) {

        int ans = s.top();
        s.pop();
        cout << ans << " ";

    }
       return 0;

}

