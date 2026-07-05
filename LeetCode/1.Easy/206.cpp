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
    ListNode l;
    ListNode* temp=&l;
    for(int i:lis) {
        temp->next=new ListNode(i);
        temp=temp->next;
    }
    return l.next;
}
void printList(ListNode* l) {
    while(l) {
        cout<<l->val<<" ";
        l=l->next;
    }
}

/*
Approach: Three Pointer / Linear Pass
TC: O(n)
SC: O(1)
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr) {
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};
int main() {
    Solution s;
    ListNode* l1=makeList({1,2,3,4,5});
    printList(l1);
    cout<<'\n';
    l1=s.reverseList(l1);
    printList(l1);
    return 0;
}