#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// Reverse Stack Function
void reverseStack(stack<int> &s)
{
    vector<int> stackValues;
    while(!s.empty())
    {
        stackValues.push_back(s.top());
        s.pop();
    }
    for(int i:stackValues)
        s.push(i);
}
// Print Stack Function
void print(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<'\n';
}
// Main Function
int main()
{
    stack<int> st;
    vector<int> v={5,4,3,2,1};
    for(int i:v)
        st.push(i);
    cout<<"Original Stack : "; print(st);
    reverseStack(st);
    cout<<"Reversed Stack : "; print(st);
    return 0;
}