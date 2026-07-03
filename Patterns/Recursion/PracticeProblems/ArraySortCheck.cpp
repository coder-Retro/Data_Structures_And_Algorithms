#include<iostream>
#include<vector>
using namespace std;
class Recursion
{
public:
    bool isSorted(const vector<int>& num,int n)
    {
        if(n==1) return true;
        return num[n-1]>=num[n-2] && isSorted(num,n-1);
    }
};
int main()
{
    Recursion r;
    vector<int> num={1,2,3,4,5,6,7,8,9,10};
    if(r.isSorted(num,num.size()))
        cout<<"Sorted";
    else
        cout<<"Unsorted";
    return 0;
}