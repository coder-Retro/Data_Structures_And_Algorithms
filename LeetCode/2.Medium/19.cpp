#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* makeList(initializer_list<int> lis) {
    ListNode dummy(0);
    ListNode* l=&dummy;
    for(int i:lis) {
        l->next=new ListNode(i);
        l=l->next;
    }
    return dummy.next;
}
void print(ListNode* head) {
    while(head) {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<'\n';
}

/*
Approach: Slow & Fast Pointers
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next=head;
        ListNode *slow=&dummy,*fast=&dummy;
        while(n--) fast=fast->next;
        while(fast && fast->next) {
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* target=slow->next;
        slow->next=target->next;
        delete target;
        return dummy.next;
    }
};
int main() {
    Solution s;
    ListNode* l=makeList({1,2,3,4,5,6,7,8,9,10});
    print(l);
    l=s.removeNthFromEnd(l,5);
    print(l);
    return 0;
}