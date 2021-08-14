# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode) -> bool:
        # null is Palindrome
        if not head:
            return True

        # Extract values
        values = [head.val]
        while head.next:
            values.append(head.next.val)
            head.next = head.next.next

        # Palindrome Check
        lenValues = len(values)
        lenForPalindrome = lenValues//2
        for i in range(lenForPalindrome):
            if values[i] != values[lenValues-i-1]:
                return False
        return True
