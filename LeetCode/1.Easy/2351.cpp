#include<iostream>
#include<string>
using namespace std;

/*
Approach: Hashing
TC: O(b)
SC: O(1)
*/

class Solution {
public:
    char repeatedCharacter(string s) {
        bool appeared[26]={false};
        for(char c:s)
            if(appeared[c-'a']) return c;
            else appeared[c-'a']=true;
        return '\0';
    }
};
int main() {
    Solution s;
    string str="abccbaacz";
    cout<<s.repeatedCharacter(str);
    return 0;
}