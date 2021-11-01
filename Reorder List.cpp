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
    void reorderList(ListNode* head) {
        vector<ListNode *>v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp);
            temp=temp->next;
        }
        
        int i=0;
        int j=v.size()-1;
        while(i<j){
            v[i]->next=v[j];
            v[j]->next=v[i+1];
            i++;
            j--;
        }
        int x = v.size()/2;
        v[x]->next=NULL;
        
    }
};
