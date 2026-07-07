#include<iostream>
using namespace std;

/*
Problem Statement:
Your are supposed to make two functions which:

1. Returns the maximum possible signed int.
2. Returns the minimum possible signed int.

Constraints:

1. Your are only allowed to use BitWise operators.
2. Your are not allowed to use INT_MIN and INT_MAX.
*/

// BitManipulation Class
class BitManipulation {
public:
    int maxInt() { return ((unsigned int)~0)>>1; }
    int minInt() { return ~maxInt();             }
};

// Main Function
int main() {
    BitManipulation obj;
    cout<<obj.maxInt()<<'\n';
    cout<<obj.minInt()<<'\n';
    return 0;
}