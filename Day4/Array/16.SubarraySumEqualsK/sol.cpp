// WATCH STRIVER'S VIDEO FOR BETTER UNDERSTANDING

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        map<int, int> map;

        long long sum = 0;

        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];

            if (sum == k)
            {
                ans++;
            }

            int rem = sum - k;

            if (map.find(rem) != map.end())
            {
                ans += map[rem];
            }

            map[sum]++;
        }

        return ans;
    }
};