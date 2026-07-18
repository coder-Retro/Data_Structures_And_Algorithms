#include<iostream>
#include<vector>
#include<utility>
using namespace std;

/*
Approach: Modulo Based Euclidean Algo
TC: O(n log m), m = max(minNum,maxNum)
SC: O(1)
*/

class Solution {
    int euclidean(int a,int b) {
        while(b) { a%=b; swap(a,b); }
        return a;
    }
public:
    int findGCD(vector<int>& nums) {
        int minNum=nums[0];
        int maxNum=nums[0];
        for(int i:nums) {
            if(i<minNum) minNum=i;
            if(i>maxNum) maxNum=i;
        }
        return euclidean(minNum,maxNum);
    }
};
int main() {
    Solution obj;
    vector<int> nums={2,5,6,9,10};
    cout<<obj.findGCD(nums);
    return 0;
}