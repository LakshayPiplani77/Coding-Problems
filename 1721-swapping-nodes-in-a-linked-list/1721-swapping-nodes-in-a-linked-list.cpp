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
private:
    int length(ListNode* head)
    {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* p = head;
        ListNode* q = head;
        for(int i = 1;i<k;i++)
        {
            p = p->next;
        }
        int n = length(head);
        for(int i = 1;i<= n-k;i++)
        {
            q = q->next;
        }
        swap(p->val,q->val);
        return head;
    }
};