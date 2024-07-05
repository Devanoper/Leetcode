#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> ust;
        ListNode* ptr = head;
        while (ptr!=nullptr)
        {   
            if (!ust.count(ptr))
            {   
                ust.emplace(ptr);
                ptr=ptr->next;
            }
            else
            {
                return ptr;
            }
            
            
        }
        return ptr;
        

    }
};