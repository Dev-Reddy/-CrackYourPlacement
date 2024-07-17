// TC: O(N)
// SC: O(1)
// WATCH NEETCODE VIDEO FOR BETTER UNDERSTANDING

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++)
        {
            int curr = abs(nums[i]);
            if (nums[curr - 1] < 0)
            {
                nums[curr - 1] *= -1;
                ans.push_back(curr);
            }
            else
            {
                nums[curr - 1] *= -1;
            }
        }

        return ans;
    }
};