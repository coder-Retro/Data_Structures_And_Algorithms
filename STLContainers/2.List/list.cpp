#include<iostream>
#include<list>
using namespace std;
/*
List are DLL or doubly linked lists and hence random access isn't
possible in them, like:
list<int> lis={1,2,3,4,5};
cout<<lis[2]; // invalid
*/
int main()
{
    // Declaration:
    list<int> lis;
    // Push Back Function:
    lis.push_back(2); // adds element to end of list
    lis.push_back(3);
    // Push Front Function:
    lis.push_front(1); // adds element to start of list
    lis.push_front(0);
    // List Print Loop:
    for(int i:lis) cout<<i<<" ";
    cout<<'\n';
    // Pop Back Function:
    lis.pop_back(); // removes element from end of list
    // Pop Front Function:
    lis.pop_front(); // removes element from start of list
    for(int i:lis) cout<<i<<" ";
    cout<<'\n';
    return 0;
}