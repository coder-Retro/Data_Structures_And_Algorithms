#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* makelist(initializer_list<int> lis) {
    ListNode dummy(0);
    ListNode* l=&dummy;
    for(int i:lis)
    {
        l->next=new ListNode(i);
        l=l->next;
    }
    return dummy.next;
}
void print(ListNode* l) {
    while(l)
    {
        cout<<l->val<<" ";
        l=l->next;
    }
    cout<<'\n';
}

/*
Approach: Min Heap
TC: O(n log k), k = number of lists
SC: O(k), k = number of lists
*/

class Solution {
    struct Compare {
        bool operator()(ListNode* a,ListNode* b) {
            return a->val > b->val;
        }
    };
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,Compare> minHeap;
        for(ListNode* l:lists)
            if(l) minHeap.push(l);
        ListNode dummy;
        ListNode* tail=&dummy;
        while(!minHeap.empty()) {
            tail->next=minHeap.top();
            minHeap.pop();
            if(tail->next->next)
                minHeap.push(tail->next->next);
            tail=tail->next;
        }
        tail->next=nullptr;
        return dummy.next;
    }
};
int main() {
    Solution s;
    vector<ListNode*> lists;
    ListNode* lA=makelist({1,4,5});
    ListNode* lB=makelist({1,3,4});
    ListNode* lC=makelist({2,6});
    lists.push_back(lA);
    lists.push_back(lB);
    lists.push_back(lC);
    ListNode* merged=s.mergeKLists(lists);
    print(merged);
    return 0;
}