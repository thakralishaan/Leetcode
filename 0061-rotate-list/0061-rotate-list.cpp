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
    ListNode* rotateRight(ListNode* head, int k) {
        // Check if the list is empty, has only one node, or k is 0.
        if (head == NULL || head->next == NULL || k == 0) {
            return head;
        }

        ListNode* curr = head;
        int len = 1;
        // Traverse the linked list to count the number of nodes (len).
        while (curr->next != NULL) {
            curr = curr->next;
            len++;
        }

        // Form a cycle by connecting the last node to the original head.
        curr->next = head;

        // Calculate the effective rotation value (k % len).
        k = k % len;

        // Calculate the new value of k to get the new tail.
        k = len - k;

        // Move curr k steps forward to reach the node that will become the new tail.
        while (k--) {
            curr = curr->next;
        }

        // Update head to point to the new head of the rotated list.
        head = curr->next;

        // Break the cycle by setting curr->next to NULL, making the last node the new tail.
        curr->next = NULL;

        // Return the new head of the rotated list.
        return head;
    }
};
