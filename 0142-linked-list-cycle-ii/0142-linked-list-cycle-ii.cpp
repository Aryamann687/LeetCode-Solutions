/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         unordered_map<ListNode*, int> visited;

        ListNode* temp = head;
        ListNode* ans=NULL;

        while(temp != NULL){

            if(visited[temp] == 1){
                ans=temp;
                break;
            }

            visited[temp] = 1;

            temp = temp->next;
        }
        if(ans==NULL){
            return NULL;
        }

        return ans;
        
    }
};