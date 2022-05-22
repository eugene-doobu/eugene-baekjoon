class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        while(head && head->next){
            ListNode *tmpNode = head->next;
            head->next = swapPairs(tmpNode->next);
            tmpNode->next = head;
            return tmpNode;
        }
        return head;
    }
};