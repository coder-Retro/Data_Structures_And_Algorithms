#include<iostream>
#include<string>
using namespace std;

/*
Approach: 
TC: O()
SC: O()
*/

class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        while(s.size()<k) {
            string temp=s;
            for(int i=0;i<temp.size();i++)
                if(temp[i]<'z') temp[i]++;
                else            temp[i]='a';
            s+=temp;
        }
        return s[k-1];
    }
};
int main() {
    Solution obj;
    int k=10;
    cout<<obj.kthCharacter(k);
    return 0;
}