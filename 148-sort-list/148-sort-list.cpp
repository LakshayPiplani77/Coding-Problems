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
    ListNode* findMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* merge(ListNode* left,ListNode* right)
    {
        if(left == NULL)
            return right;
        if(right == NULL)
            return left;
        ListNode* dummy = new ListNode(-1);
        ListNode* ans = dummy;
        while(left != NULL && right != NULL)
        {
            if(left->val < right->val)
            {
                ans->next = left;
                ans = left;
                left = left->next;
            }
            else
            {
              ans->next = right;
              ans = right;
              right = right->next;   
            }
        }
        while(left != NULL)
        {
            ans->next = left;
            ans = left;
            left = left->next;
        }
        while(right != NULL)
        {
            ans->next = right;
            ans = right;
            right = right->next;  
        }
        dummy = dummy->next;
        return dummy;
    }
public:
    ListNode* sortList(ListNode* head) {
        //base case
        if(head == NULL || head->next == NULL)
            return head;
        
        //break linked list into two parts
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;
        
        //sort left and right part
        left = sortList(left);
        right = sortList(right);
        
        //merge both left and right part
        ListNode* result = merge(left,right);
        return result;
    }
};