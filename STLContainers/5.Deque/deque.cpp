#include<iostream>
#include<deque>
using namespace std;
/*
Deque stands for double ended queue, these
are basically dynamic arrays and hence random
access is possible like vectors and arrays, like:
deque<int> dq={1,2,3,4,5};
cout<<dq[2]; // valid
*/
int main()
{
    // Declaration:
    deque<int> dq;
    // Push Back Function:
    dq.push_back(2); // add element to the end of deque
    dq.push_back(3);
    // Push Front Function:
    dq.push_front(1); // add element to the start of deque
    dq.push_front(0);
    for(int i:dq) cout<<i<<" ";
    cout<<'\n';
    // Pop Back Function:
    dq.pop_back(); // remove element from the end of deque
    // Pop Front Function:
    dq.pop_front(); // remove element fromt the start of deque
    for(int i:dq) cout<<i<<" ";
    cout<<'\n';
    return 0;
}