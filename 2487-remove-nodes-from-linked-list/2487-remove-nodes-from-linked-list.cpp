class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* removeNodes(ListNode* head) {

        if (!head || !head->next)
            return head;

        head = reverse(head);

        int maxi = head->val;
        ListNode* curr = head;

        while (curr->next) {

            if (curr->next->val < maxi) {

                ListNode* next = curr->next;
                curr->next = curr->next->next;
               

            } else {

                curr = curr->next;
                maxi = curr->val;
            }
        }

        return reverse(head);
    }
};