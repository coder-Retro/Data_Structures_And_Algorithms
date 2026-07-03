#include<iostream>
#include<vector>
using namespace std;

// Solution Class
class Solution {
private:
    void merge(vector<int>& v,int start,int mid,int end) {
        vector<int> merged;
        int left=start,right=mid+1;
        while(left<=mid && right<=end) {
            if(v[left]<v[right]) merged.push_back(v[left++]);
            else                 merged.push_back(v[right++]);
        }
        while(left<=mid)  merged.push_back(v[left++]);
        while(right<=end) merged.push_back(v[right++]);
        for(int i=0;i<merged.size();i++) v[start+i]=merged[i];
    }
public:
    void mergeSort(vector<int>& v,int start,int end) {
        if(start<end) {
            int mid=start+(end-start)/2;
            mergeSort(v,start,mid);
            mergeSort(v,mid+1,end);
            merge(v,start,mid,end);
        }
    }
};

// Main Function
int main() {

    // Objects
    Solution s;
    vector<int> vec={6,5,4,3,2,1};

    // Original Vector
    cout<<"Original Vector: ";
    for(int i:vec) cout<<i<<" ";

    // Applying Merge Sort
    s.mergeSort(vec,0,vec.size()-1);
 
    // Sorted Vector
    cout<<"\nSorted Vector: ";
    for(int i:vec) cout<<i<<" ";

    return 0;
}