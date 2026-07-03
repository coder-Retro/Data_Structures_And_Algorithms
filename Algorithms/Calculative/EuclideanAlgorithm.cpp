#include<iostream>
using namespace std;
// Euclidean Class
class Solution
{
public:
    int gcd(int a,int b)
    {
        // Negative entry check
        if(a<0) a*=(-1);
        if(b<0) b*=(-1);
        // 0 entry check
        if(!a) return b;
        if(!b) return a;
        // Euclidean Algorithm Loop
        while(a!=b)
        {
            if(a<b) b-=a;
            else    a-=b;
        }
        // Returning a which will be the GCD when a==b
        return a;
    }
};
// Main Function
int main()
{
    Solution euclidean;
    int a,b;
    cout<<"Enter a : "; cin>>a;
    cout<<"Enter b : "; cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" : "<<euclidean.gcd(a,b);
    return 0;
}