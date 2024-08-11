class Solution
{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int S = 0;
        for (int i = 0; i < N; i++)
        {
            S += arr[i];
        }
        if (S % 2 == 0)
        {
            S /= 2;
            vector<int> dp(S + 1, 0);
            dp[0] = 1;
            for (int i = 0; i < N; i++)
            {
                for (int j = S; j >= 0; j--)
                {
                    if (j - arr[i] >= 0)
                    {
                        dp[j] |= dp[j - arr[i]];
                    }
                }
            }
            return dp[S];
        }
        else
        {
            return 0;
        }
    }
};