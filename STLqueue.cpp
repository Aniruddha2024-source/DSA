#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> qt;

    qt.push(10);
    cout << "Front of queue is " << qt.front() << endl;
    qt.push(11);
    cout << "Front of queue is " << qt.front() << endl;
    qt.push(12);
    cout << "Front of queue is " << qt.front() << endl;
    qt.push(13);
   cout << "Front of queue is " << qt.front() << endl;

   // cout << "Top element is : " << qt.front() <<  " ";
    //qt.pop();

    cout << "Size of the queue is : " << qt.size() << endl;

    bool found = qt.empty();
    if(found)
        cout << "queue is empty" << endl;
    else
        cout << "queue is not empty" << endl;


    /*while(!qt.empty()) {
        int ans = qt.front();
        qt.pop();
        cout << ans << endl;
    }*/


}