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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *eS=NULL,*eE=NULL,*oS=NULL,*oE=NULL;
        int count =1;
    for(ListNode *curr=head;curr!=NULL;curr=curr->next){
        if(count%2 !=0){
            if(oS==NULL){
                oS=curr;
                oE=oS;
            }else{
                oE->next=curr;
                oE=oE->next;
            }
        }else{
            if(eS==NULL){
                eS=curr;
                eE=eS;
            }else{
                eE->next=curr;
                eE=eE->next;
            }
        }
        count++;
    }
    if(oS==NULL||eS==NULL)
        return head;
    oE->next=eS;
    eE->next=NULL;
    return oS;
    }
};