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
    void reverse(ListNode* s,ListNode* e)
    {
        ListNode *p = NULL,*c = s,*n = s->next;
        while(p != e)
        {
            c->next = p;
            p = c;
            c = n;
            if(n != NULL)
                n = n->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 1)
            return head;
        ListNode* start = head;
        ListNode* end = head;
        int inc = k-1;
        while(inc > 0)
        {
            end = end->next;
            inc--;
            if(end == NULL)
                return head;
        }
         ListNode* nextHead =  reverseKGroup(end->next,k);
        reverse(start,end);
      
        start->next = nextHead;
        return end;
    }
};