// VIDEO TUTORIAL - https://www.youtube.com/watch?v=wjYnzkAhcNk&ab_channel=NeetCode

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];

        // find intersection
        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];

        // find start of cycle
        while (fast != slow)
        {
            fast = nums[fast];
            slow = nums[slow];
        }

        return slow;
    }
};