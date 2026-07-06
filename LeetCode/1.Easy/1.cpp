#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

/*
Approach: Hashing
TC: O(n)
SC: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums,int target) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++) {
            auto it=m.find(target-nums[i]);
            if(it!=m.end()) return {it->second,i};
            m[nums[i]]=i;
        }
        return {};
    }
};
int main() {
    Solution s;
    vector<int> nums={2,7,11,15};
    int target=9;
    vector<int> result=s.twoSum(nums,target);
    for(int i:result) cout<<i<<" ";
    return 0;
}