#include<iostream>
#include<vector>
using namespace std;
// Recursion Class
class Recursion
{
public:
    int BinarySearch(const vector<int>& vec,int start,int end,int target)  
    {
        if(start>end) return -1;
        int mid=start+(end-start)/2;
        if(vec[mid]==target) return mid;
        if(vec[mid]<target) return BinarySearch(vec,mid+1,end,target);
        return BinarySearch(vec,start,mid-1,target);
    }
};
// Main Function
int main()
{
    Recursion r;
    vector<int> vec={1,2,3,4,5,6,7,8,9,10};
    int target=5;
    cout<<target<<" found at index : "<<r.BinarySearch(vec,0,vec.size()-1,target);
    return 0;
}