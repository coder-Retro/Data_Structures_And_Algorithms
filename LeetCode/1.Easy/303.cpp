#include<iostream>
#include<vector>
using namespace std;

/*
Constructor:
Approach: Prefix Sum
TC: O(n)
SC: O(n)

sumRange Method:
Approach: Range Arithmetic
TC: O(1)
SC: O(1)
*/

class NumArray {
    vector<int> preSum;
public:
    NumArray(vector<int>& nums) {
        int sum=0;
        preSum.push_back(sum);
        for(int i:nums) {
            sum+=i;
            preSum.push_back(sum);
        }
    }
    int sumRange(int left, int right) {
        return preSum[right+1]-preSum[left];
    }
};
int main() {
    vector<int> nums={-2, 0, 3, -5, 2, -1};
    NumArray nA(nums); cout<<"null"<<'\n';
    cout<<nA.sumRange(0,2)<<'\n';
    cout<<nA.sumRange(2,5)<<'\n';
    cout<<nA.sumRange(0,5)<<'\n';
    return 0;
}