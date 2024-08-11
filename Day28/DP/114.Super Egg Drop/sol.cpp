class Solution
{
public:
    int dp[101][10001];

    int helper(int e, int f)
    {
        if (f == 0 || f == 1)
            return f;
        if (e == 1)
            return f;

        if (dp[e][f] != -1)
            return dp[e][f];

        int ans = INT_MAX, upperF = 0, lowerF = 0;
        int left = 1, right = f;

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (dp[e - 1][mid - 1] != -1)
                lowerF = dp[e - 1][mid - 1];
            else
                lowerF = helper(e - 1, mid - 1);

            if (dp[e][f - mid] != -1)
                upperF = helper(e, f - mid);
            else
                upperF = helper(e, f - mid);

            if (lowerF > upperF)
                right = mid;
            else
                left = mid + 1;

            int temp = 1 + max(lowerF, upperF);

            ans = min(ans, temp);
        }

        return dp[e][f] = ans;
    }

    int superEggDrop(int e, int f)
    {
        memset(dp, -1, sizeof dp);

        return helper(e, f);
    }
};
class Solution
{
public:
    int dp[101][10001];

    int helper(int e, int f)
    {
        if (f == 0 || f == 1)
            return f;
        if (e == 1)
            return f;

        if (dp[e][f] != -1)
            return dp[e][f];

        int ans = INT_MAX, upperF = 0, lowerF = 0;
        int left = 1, right = f;

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (dp[e - 1][mid - 1] != -1)
                lowerF = dp[e - 1][mid - 1];
            else
                lowerF = helper(e - 1, mid - 1);

            if (dp[e][f - mid] != -1)
                upperF = helper(e, f - mid);
            else
                upperF = helper(e, f - mid);

            if (lowerF > upperF)
                right = mid;
            else
                left = mid + 1;

            int temp = 1 + max(lowerF, upperF);

            ans = min(ans, temp);
        }

        return dp[e][f] = ans;
    }

    int superEggDrop(int e, int f)
    {
        memset(dp, -1, sizeof dp);

        return helper(e, f);
    }
};
class Solution
{
public:
    int dp[101][10001];

    int helper(int e, int f)
    {
        if (f == 0 || f == 1)
            return f;
        if (e == 1)
            return f;

        if (dp[e][f] != -1)
            return dp[e][f];

        int ans = INT_MAX, upperF = 0, lowerF = 0;
        int left = 1, right = f;

        while (left < right)
        {
            int mid = left + (right - left) / 2;

            if (dp[e - 1][mid - 1] != -1)
                lowerF = dp[e - 1][mid - 1];
            else
                lowerF = helper(e - 1, mid - 1);

            if (dp[e][f - mid] != -1)
                upperF = helper(e, f - mid);
            else
                upperF = helper(e, f - mid);

            if (lowerF > upperF)
                right = mid;
            else
                left = mid + 1;

            int temp = 1 + max(lowerF, upperF);

            ans = min(ans, temp);
        }

        return dp[e][f] = ans;
    }

    int superEggDrop(int e, int f)
    {
        memset(dp, -1, sizeof dp);

        return helper(e, f);
    }
};