#include<iostream>
using namespace std;

// Reverse Function
void reverse(string& s){
    char temp;
    for(int i=0,j=s.length()-1;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
}

// Main Function
int main()
{
    string str;
    cout<<"Original String : ";
    getline(cin,str);
    reverse(str);
    cout<<"Reversed String : "<<str<<'\n';
    return 0;
}