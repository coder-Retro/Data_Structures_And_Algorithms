#include<iostream>
using namespace std;

/*
Approach: Iterative Power Calculation
TC: O(log n)
SC: O(1)
*/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        long pow=1;
        while(pow<n) pow*=4;
        return (pow==n);
    }
};
int main() {
    Solution s;
    int n=16;
    (s.isPowerOfFour(n))?cout<<"true":cout<<"false";
    return 0;
}