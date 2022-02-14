// https://leetcode.com/problems/odd-even-linked-list/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == NULL) 
            return NULL;
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;
        while (even != NULL && even->next != NULL) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};

// Time complexity : O(n)O(n). There are total nn nodes and we visit each node once.
