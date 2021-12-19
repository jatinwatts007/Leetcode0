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
    ListNode* insertionSortList(ListNode* head) {
        ListNode * temp=head->next;
        ListNode * prev = head;
        int count=0;
        while(temp!=NULL){
            ListNode * temp1=head;
            int x = temp->val;
            ListNode * prev1 = NULL;
            while(temp1!=NULL && temp!=temp1){
                if(temp1->val>x){
                    prev->next=temp->next;
                    if(prev1==NULL){
                        temp->next=head;
                        head=temp;
                        temp=prev;
                        
                    }else{
                        prev1->next=temp;
                        temp->next=temp1;
                        temp=prev;
                    }
                    break;
                }
                   prev1=temp1;
                    temp1=temp1->next; 
                }
            
                prev=temp;
                temp=temp->next;
            
        }
        
        return head;
    }
};
