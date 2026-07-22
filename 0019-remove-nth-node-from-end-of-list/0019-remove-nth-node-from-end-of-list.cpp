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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=0;
        ListNode* temp=head;
       
        

        temp=head;
        while(temp!=NULL){
            k++;
            temp=temp->next;
        }
        int count=k-n+1;
        if(count==1) return head->next;
        temp=head;
     for(int i=1;i<count-1;i++){
        temp=temp->next;
     }
        temp->next=temp->next->next;
        
        return head;


        
    }
};