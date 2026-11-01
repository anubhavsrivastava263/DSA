class Solution {
public:
ListNode* rec(ListNode* head, int& n){
    if(!head)return NULL;
    head->next=rec(head->next,n);
    n--;
    if(n==0){
        return head->next;
    }
    return head;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        return rec(head,n);
    }
    
};