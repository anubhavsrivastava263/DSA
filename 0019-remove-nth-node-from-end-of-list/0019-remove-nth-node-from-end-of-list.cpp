class Solution {
    ListNode* deleteNode(ListNode* head,int pos){
        if(pos==0){
            head=head->next;
            return head;
        }
        ListNode* prev=head;
        for(int i=0;i<pos-1;i++){
            prev=prev->next;

        }
        prev->next=prev->next->next;
        return head;
    }
public:
  ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int count=0;
        while(curr!=nullptr){
            curr=curr->next;
            count++;
        }
        int position =(count-n);
        return deleteNode(head,position);
    }
    
};