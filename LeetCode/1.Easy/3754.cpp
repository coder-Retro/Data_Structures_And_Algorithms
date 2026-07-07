#include<iostream>
using namespace std;

/*
Approach: Modulo Extraction 
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        int mul=1;
        long long concat=0;
        while(n) {
            if(n%10) {
                concat+=(mul*(n%10));
                mul*=10;
            }
            sum+=(n%10);
            n/=10;
        }
        return concat*sum;
    }
};
int main() {
    Solution s;
    int n=10203004;
    cout<<s.sumAndMultiply(n);
    return 0;
}