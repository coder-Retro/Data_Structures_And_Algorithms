#include<iostream>
#include<string>
using namespace std;

/*
Approach: Displacement Calculation
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    bool judgeCircle(string s) {
        int x=0,y=0;
        for(char c:s) {
            switch(c) {
                case 'U': y++; break;
                case 'D': y--; break;
                case 'R': x++; break;
                case 'L': x--; break;
            }
        }
        return !x && !y;
    }
};
int main() {
    Solution s;
    string str="UDLR";
    if(s.judgeCircle(str)) cout<<"true";
    else                   cout<<"false";
    return 0;
}