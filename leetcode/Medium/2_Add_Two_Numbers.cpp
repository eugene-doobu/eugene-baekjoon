/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* node = new ListNode();
		ListNode* root = node;
		int up = 0;

		while (l1 != nullptr || l2 != nullptr || up != 0) {
			int num1 = 0, num2 = 0, sumVal = 0;
			if (l1 != nullptr) num1 = l1->val;
			if (l2 != nullptr) num2 = l2->val;
			sumVal = num1 + num2 + up;
			up = 0;

			ListNode* nextNode = new ListNode(sumVal % 10);
			node->next = nextNode;

			if (sumVal >= 10) up = 1;

			node = node->next;
			if (l1 != nullptr) l1 = l1->next;
			if (l2 != nullptr) l2 = l2->next;
		}

		return root->next;
    }
};