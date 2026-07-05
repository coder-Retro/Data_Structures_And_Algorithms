#include<iostream>
#include<vector>
using namespace std;

/*
Approach: Gauss's Summation / Arithmetic Series Sum
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int maxSum=n*(n+1)/2;
        int sum=0;
        for(int i:nums) sum+=i;
        return maxSum-sum;
    }
};
int main() {
    Solution s;
    vector<int> nums={3,0,1};
    cout<<s.missingNumber(nums);
    return 0;
}