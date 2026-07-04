#include<iostream>
#include<vector>
using namespace std;
// Kadanes Class
class Kadanes {
public:
    int maxSubArraySum(vector<int>& nums) {
        int curr=0;
        int maxSum=0;
        for(int i:nums) {
            curr+=i;
            maxSum=max(maxSum,curr);
            if(curr<0) curr=0;
        }
        return maxSum;
    }
};
// Main Function
int main() {
    Kadanes obj;
    int s;
    cout<<"Enter Size of array : "; cin>>s;
    vector<int> nums(s);
    cout<<"Enter Elements : ";
    for(int i=0;i<s;i++) cin>>nums[i];
    cout<<"Max Sum Array Sum : "<<obj.maxSubArraySum(nums); 
    return 0;
}