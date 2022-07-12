class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head){
            return NULL;
        } else if(head->val==val){
            ListNode*tmp=head->next;
            head->next=NULL;
            return removeElements(tmp,val);
        } else {
            ListNode*tmp=head->next;
            // head->next=NULL;
            tmp=removeElements(tmp,val);
            head->next=tmp;
            return head;
        }
    }
};