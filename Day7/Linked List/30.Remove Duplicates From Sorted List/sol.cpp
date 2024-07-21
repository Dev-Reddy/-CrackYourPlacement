// TC: O(N)
// SC: O(1)

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *temp = head;

        while (temp && temp->next)
        {
            while (temp && temp->next && temp->val == temp->next->val)
            {
                temp->next = temp->next->next;
            }
            temp = temp->next;
        }

        return head;
    }
};