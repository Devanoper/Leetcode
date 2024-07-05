struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head || !head->next) {
            return false;
        }
        ListNode* slowpointer = head;
        ListNode* fastpointer = head;
        while (fastpointer && fastpointer->next) {
            slowpointer = slowpointer->next;
            fastpointer = fastpointer->next->next;
            if (fastpointer == slowpointer) {
                return true;
            }
        }
        return false;
    }
};
