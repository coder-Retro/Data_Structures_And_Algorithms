#include<iostream>
#include<string>
using namespace std;

/*
Approach: Linear Pass / Max Tracking
TC: O(n²)
SC: O(m), m = length of longest substring
*/

class Solution {
public:
    int LengthOfLongestSubstring(string s) {
        string curr="";
        int maxL=0;
        for(char c:s) {
            if(curr.find(c)!=string::npos)
                curr=curr.substr(curr.find(c)+1);
            curr+=c;
            maxL=max(maxL,(int)curr.length());
        }
        return maxL;
    }
};
int main() {
    Solution s;
    string str="abcabcbb";
    cout<<s.LengthOfLongestSubstring(str);
    return 0;
}