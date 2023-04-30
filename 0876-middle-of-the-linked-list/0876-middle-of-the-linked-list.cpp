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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        int count=0;
        ListNode *curr;
        for(curr=head; curr!=NULL; curr= curr->next){
            count++;
        }
        
        curr= head;
        for(int i=0;i<count/2;i++){
            curr= curr->next;
        }
        return curr;
    }
};