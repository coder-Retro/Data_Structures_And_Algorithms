#include<iostream>
#include<vector>
#include<climits>
using namespace std;

/*
Approach: Linear Pass / Min Tracking
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int m1=INT_MAX,m2=INT_MAX;
        for(int i:prices) {
            if(i<m1) {
                m2=m1;
                m1=i;
            } else if(i<m2) m2=i;
        }
        int diff=money-(m1+m2);
        return (diff>=0)?diff:money;
    }
};
int main() {
    Solution s;
    vector<int> prices={3,2,5,7,3,2};
    int money=10;
    cout<<s.buyChoco(prices,money);
    return 0;
}