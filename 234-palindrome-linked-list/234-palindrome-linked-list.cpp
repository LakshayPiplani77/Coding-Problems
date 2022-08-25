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
    ListNode* findMiddle(ListNode* head)
    {
        ListNode *slow = head,*fast = head->next;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forward;
        while(curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL)
            return true;
        //step 1 - find middle
        ListNode* middle = findMiddle(head);
        //step 2 - reverse LL after middle
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        //step 3 - compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        while(head2 != NULL)
        {
            if(head2->val != head1->val)
                return 0;
            head1 = head1->next;
            head2 = head2->next;
        }
         //step 4 repeat step2
            temp = middle->next;
            middle->next = reverse(temp);
            return true;
        
    }
};