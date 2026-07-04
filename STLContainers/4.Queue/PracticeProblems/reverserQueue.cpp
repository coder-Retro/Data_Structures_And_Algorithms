#include<iostream>
#include<queue>
#include<stack>
using namespace std;
// Reverse Stack Function
void reverseQueue(queue<int> &q)
{
    stack<int> queueValues;
    while(!q.empty())
    {
        queueValues.push(q.front());
        q.pop();
    }
    while(!queueValues.empty())
    {
        q.push(queueValues.top());
        queueValues.pop();
    }
}
// Print Stack Function
void print(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<'\n';
}
// Main Function
int main()
{
    queue<int> q;
    vector<int> v={1,2,3,4,5};
    for(int i:v)
        q.push(i);
    cout<<"Original Queue : "; print(q);
    reverseQueue(q);
    cout<<"Reversed Queue : "; print(q);
    return 0;
}