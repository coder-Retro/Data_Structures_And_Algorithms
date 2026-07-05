#include<iostream>
#include<vector>
using namespace std;

/*
Approach: Two Pointer
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        for (int j=0;j<nums.size();j++)
            if (!(nums[j]%2))
                swap(nums[i++], nums[j]);
        return nums;
    }
};
int main() {
    Solution s;
    vector<int> nums={3,1,2,4};
    nums=s.sortArrayByParity(nums);
    for(int i:nums) cout<<i<<" ";
    return 0;
}