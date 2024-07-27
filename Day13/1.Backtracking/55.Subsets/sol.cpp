class Solution
{
public:
    void helper(vector<int> &nums, int i, vector<int> output, set<vector<int>> &s)
    {
        if (i >= nums.size())
        {
            s.insert(output);
            return;
        }

        helper(nums, i + 1, output, s);
        output.push_back(nums[i]);
        helper(nums, i + 1, output, s);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        set<vector<int>> s;
        vector<int> output;
        helper(nums, 0, output, s);
        vector<vector<int>> ans(s.begin(), s.end());
        sort(ans.begin(), ans.end());
        return ans;
    }
};