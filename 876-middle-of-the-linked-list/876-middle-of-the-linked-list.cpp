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
        if(head == NULL)
            return 0;
        if(head->next == NULL)
            return 1;
        ListNode* temp = head;
        while(temp != NULL)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
public:
    ListNode* middleNode(ListNode* head) {
        int len = length(head);
        ListNode* temp = head;
        int half = len/2;
        while(half>0)
        {
            temp = temp->next;
            half--;
        }
        return temp;
    }
};