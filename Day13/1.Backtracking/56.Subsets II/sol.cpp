
class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {

        set<vector<int>> s;
        int n = nums.size();
        for (int i = 0; i < pow(2, n); i++)
        {
            vector<int> temp;
            for (int j = 0; j < n; j++)
            {
                if (i & (1 << j))
                    temp.push_back(nums[j]);
            }
            sort(temp.begin(), temp.end());
            s.insert(temp);
        }

        vector<vector<int>> ans(s.begin(), s.end());
        sort(ans.begin(), ans.end());

        return ans;
    }
};
