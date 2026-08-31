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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
       
        ListNode* prev=head;
        ListNode* curr=head->next;
        int pos=1;
        int first=-1;
        int last=-1;
        int mn=INT_MAX;
        while(curr->next!=nullptr){
           if(curr->val<prev->val && curr->val<curr->next->val ||
           curr->val>prev->val && curr->val>curr->next->val) {
           if(first==-1){
            first=pos;
           } 
           else {
            mn=min(mn,pos-last);
           }

        last=pos;
           }
           prev=curr;
           curr=curr->next;
           pos++;

        }
        if(first==last){
            return {-1,-1};

        }
        return {mn,last-first};

    }
};