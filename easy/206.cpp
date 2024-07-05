struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr!=nullptr)
        {
            // reverse the pointer of the next node to which the head is pointing
            ListNode* nextNode = curr->next;
            curr->next = prev;
            //update pointers
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};