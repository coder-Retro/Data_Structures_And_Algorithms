#include<iostream>
using namespace std;

/*
Approach: Bit Manipulation
TC: O(1)
SC: O(1)
*/

class Solution {
public:
    int smallestEvenMultiple(int n) {
        return (n&1)?n<<1:n;
    }
};
int main() {
    Solution s;
    int n=5;
    cout<<s.smallestEvenMultiple(n);
    return 0;
}