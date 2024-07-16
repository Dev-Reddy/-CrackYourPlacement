class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code
        sort(a.begin(), a.end());
        long long ans = INT_MAX;

        int i = 0, j = m - 1;

        while (j < n)
        {
            long long temp = a[j] - a[i];
            ans = min(ans, temp);
            i++;
            j++;
        }

        return ans;
    }
};