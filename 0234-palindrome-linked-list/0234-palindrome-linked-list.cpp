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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return 1;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        count/=2;
        ListNode* curr=head, *prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        ListNode* temp1=NULL;
        prev=NULL;
        while(curr){
        temp1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp1;
        }
        ListNode* head1=head, *head2=prev;
        while(head1){
            if(head1->val!=head2->val)
            return 0;
            head1=head1->next;
            head2=head2->next;
        }
        return 1;      
    }
};