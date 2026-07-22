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
Approach: Two Pointers
TC: O(m+n), m and n are sizes of lists
SC: O(1)
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode merged;
        ListNode* tail=&merged;
        while(list1&&list2) {
            if(list1->val<=list2->val) {
                tail->next=list1;
                list1=list1->next;
            } else {
                tail->next=list2;
                list2=list2->next;
            }
            tail=tail->next;
        }
        tail->next=list1?list1:list2;
        return merged.next;
    }
};
int main() {
    Solution s;
    ListNode* l1=makeList({1,2,4});
    ListNode* l2=makeList({1,3,4});
    ListNode* l3=s.mergeTwoLists(l1,l2);
    printList(l3);
    return 0;
}