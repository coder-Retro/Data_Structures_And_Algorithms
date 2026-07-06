#include<iostream>
using namespace std;

/*
Use Case:
Euclidean Algorithm is used to find the GCD of
two numbers by either doing recursive modulo
or successive subtraction. It works by subtracting
the larger number from the smaller until both
are equal. When they get equal, that equaled
value is basically their GCD.
*/

/*
Approach: Successive Reduction
TC: O(n)
SC: O(1)

Approach: Euclidean Algo / Recursive Modulo
TC: O(log(min(a,b))), a and b are two numbers
SC: O(d), d = depth of recursion
*/

// Euclidean Class
class Euclidean {
public:
    int subtraction(size_t a,size_t b) {
        // 0 entry check
        if(!a) return b;
        if(!b) return a;
        // Euclidean Algorithm
        while(a!=b)
            if(a<b) b-=a;
            else    a-=b;
        // Returning a which will be the GCD when a==b
        return a;
    }
    int modulo(size_t a,size_t b) {
        return (!b)?a:modulo(b,a%b);
    }
};
// Main Function
int main() {
    Euclidean obj;
    int a=48;
    int b=80;
    cout<<"Subtaction Approach: "<<obj.subtraction(a,b)<<'\n';
    cout<<"Modulo Approach: "<<obj.modulo(a,b);
    return 0;
}