// WATCH NEETCODE VIDEO FOR BETTER UNDERSTANDING
// TC: O(N)
// SC: O(1)

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0, r = height.size() - 1;
        int ans = INT_MIN;
        while (l < r)
        {
            int area = (r - l) * min(height[l], height[r]);
            ans = max(area, ans);
            if (height[l] <= height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }

        return ans;
    }
};