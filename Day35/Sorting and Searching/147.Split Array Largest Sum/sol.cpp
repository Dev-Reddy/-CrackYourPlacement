class Solution
{
public:
    bool check(vector<int> &weights, int days, int m)
    {
        int n = weights.size();
        int s = 0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            s += weights[i];
            if (s > m)
            {
                c++;
                s = weights[i];
            }
        }
        if (s > 0)
            c++;
        if (c <= days)
            return true;
        return false;
    }
    int splitArray(vector<int> &weights, int days)
    {
        int n = weights.size();
        int mx = 0;
        int s = 0;
        for (int i : weights)
        {
            mx = max(mx, i);
            s += i;
        }
        int l = mx, h = s;
        if (days >= n)
            return mx;
        int ans = h;
        while (l <= h)
        {
            int m = (l + h) / 2;
            if (check(weights, days, m))
            {
                ans = m;
                h = m - 1;
            }
            else
                l = m + 1;
        }
        return ans;
    }
};