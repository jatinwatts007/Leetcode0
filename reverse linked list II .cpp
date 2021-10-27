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
    void reverse(ListNode * head,ListNode* tail)
    {
        // Initialize current, previous and
        // next pointers
        ListNode* current = head;
        ListNode *prev = NULL, *next = NULL;
 
        while (current != tail) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head=prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<ListNode*>v;
        ListNode*temp = head;
        ListNode* first;
        ListNode* last;
        int i=1;
        while(temp!=NULL){
            if(i==left){
                first = temp;
            }
            if(i==right+1) last=temp;
            temp=temp->next;
            i++;
        }
        if(i==right+1) last=NULL;
        reverse(first,last);
        return head;
    }
};
