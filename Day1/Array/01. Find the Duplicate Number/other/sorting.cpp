// THIS IS NOT THE SOLUTION REQUIRED
// SORTING IS NOT ALLOWED IN THIS PROBLEM
// AS IT MODIFIES THE ARRAY

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }

        return -1;
    }
};