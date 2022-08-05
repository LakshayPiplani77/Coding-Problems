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
    bool checkPalin(vector<int> &ll)
    {
        int start = 0;
        int end = ll.size()-1;
        while(start < end)
        {
            if(ll[start] != ll[end])
                return false;
            start++;
            end--;
        }
        return true;
    }
public:
    bool isPalindrome(ListNode* head) {
        vector<int> ll;
        ListNode* temp = head;
        while(temp != NULL)
        {
            ll.push_back(temp->val);
            temp = temp->next;
        }
        return checkPalin(ll);
    }
};