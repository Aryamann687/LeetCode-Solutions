class Solution {
public:
    bool hasCycle(ListNode *head) {

        unordered_map<ListNode*, int> visited;

        ListNode* temp = head;

        while(temp != NULL){

            if(visited[temp] == 1){
                return true;
            }

            visited[temp] = 1;

            temp = temp->next;
        }

        return false;
    }
};