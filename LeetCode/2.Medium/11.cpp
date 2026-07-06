#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Approach: Two Pointer / Max Tracking
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    int maxArea(vector<int>& nums) {
        int maxArea=0,currentArea;
        for(int i=0,j=nums.size()-1;i<j;) {
            int height=min(nums[i],nums[j]);
            currentArea=height*(j-i);
            maxArea=max(maxArea,currentArea);
            if(nums[i]<nums[j]) i++;
            else                j--;
        }
        return maxArea;
    }
};
int main() {
    Solution s;
    vector<int> container={1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(container);
    return 0;
}