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
        if(head == NULL)
            return 0;
        if(head->next == NULL)
            return 1;
        int len = 0;
        ListNode* temp = head;
        while(temp)
        {
            len++;
            temp = temp->next;
        }
        return len;
    }
public:
    int getDecimalValue(ListNode* head) {
        int value = 0;
        ListNode* temp = head;
        int len = length(head);
        int i = 1;
        while(temp!= NULL && i<=len)
        {
            if(temp->val == 1)
            value += pow(2,len-i);
            temp = temp->next;
            i++;
        }
        return value;
    }
};