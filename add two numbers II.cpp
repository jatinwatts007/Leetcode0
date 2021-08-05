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
        stack<ListNode*>s1;
        stack<ListNode*>s2;
        ListNode *head=NULL;
        ListNode * ans =head;
        while(l1!=NULL)
        {
            s1.push(l1);
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            s2.push(l2);
            l2 = l2 -> next;
        }
        int carry=0;
        while(!s1.empty() && !s2.empty())
        {
            int x = s1.top()->val+s2.top()->val+carry;
            if(x>9)
            {
                x=x%10;
                carry=1;
            }else carry=0;
            cout<<x<<" ";
            ListNode* temp = new ListNode(x);
            if(head==NULL){
                head=temp;
            }else{
                temp->next=head;
                head=temp;
            }
            s1.pop();
            s2.pop();
        }
        while(!s1.empty())
        {
            int x = s1.top()->val+carry;
            if(x>9)
            {
                x=x%10;
                carry=1;
            }else carry=0;
           // cout<<x<<" ";
            ListNode* temp = new ListNode(x);
            if(head==NULL){
                head=temp;
            }else{
                temp->next=head;
                head=temp;
            }
            s1.pop();
        }
        while(!s2.empty())
        {
            int x = s2.top()->val+carry;
            if(x>9)
            {
                x=x%10;
                carry=1;
            }else carry=0;
            //cout<<x<<" ";
            ListNode* temp = new ListNode(x);
            if(head==NULL){
                head=temp;
            }else{
                temp->next=head;
                head=temp;
            }
            s2.pop();
        }
        if(carry==1)
        {
            ListNode* temp = new ListNode(carry);
            temp->next=head;
                head=temp;
        }
        return head;
    }
};
