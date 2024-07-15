class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        // i stops at the zeroes, while j traverses the array
        // after swap, i increases by one
        // in reality, i takes the first zero with it
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};