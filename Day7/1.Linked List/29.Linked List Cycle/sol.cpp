// TC: O(N)
// SC: O(1)

// Idea here is to use two pointers, one slow and one fast.
// If there is a cycle, then at some point, fast pointer will meet slow pointer.
// If there is no cycle, then fast pointer will reach NULL.

class Solution
{
public:
    bool hasCycle(ListNode *head)
    {

        ListNode *fast = head;
        ListNode *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;

            if (fast == slow)
                return true;
        }

        return false;
    }
};