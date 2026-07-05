#include<iostream>
using namespace std;

/*
Approach: Iterative Accumulation
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    int fib(int n) {
        if(n<2) return n;
        int first=0;
        int second=1;
        for(int i=2;i<=n;i++) {
            int third=first+second;
            first=second;
            second=third;
        }
        return second;
    }
};
int main() {
    Solution s;
    cout<<s.fib(5);
    return 0;
}