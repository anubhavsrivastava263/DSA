/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insernode(Node* head){
        Node* temp=head;
        while(temp!=nullptr){
            Node* nextelement=temp->next;
        Node* copy=new Node(temp->val);
        copy->next=nextelement;
        temp->next=copy;
        temp=nextelement;
    }
    }
    void randompointer(Node* head){
        Node* temp=head;
        while(temp!=nullptr){
            Node* copyNode=temp->next;
            if(temp->random){
                copyNode->random=temp->random->next;
            }
            else copyNode->random=nullptr;
            temp=temp->next->next;
        }
    }
    Node* connectnextpointer(Node* head){
        Node* dummy=new Node(-1);
        Node* res=dummy;
        Node* temp=head;
        while(temp!=nullptr){
            res->next=temp->next;
            res=res->next;

            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        insernode(head);
        randompointer(head);
        return connectnextpointer(head);
  
    }
};