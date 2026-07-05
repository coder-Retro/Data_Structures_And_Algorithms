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
    void moveZeroes(vector<int>& nums) {
        for(int l=0,r=0;r<nums.size();r++)
            if(nums[r]) {
                swap(nums[l++],nums[r]);
            }
    }
};
int main() {
    Solution s;
    vector<int> nums={0,1,0,3,12};
    s.moveZeroes(nums);
    for(int i:nums) cout<<i<<" ";
    return 0;
}