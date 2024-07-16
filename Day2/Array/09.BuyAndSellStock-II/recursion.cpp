// MEMORY LIMIT EXCEEDED
// Time Complexity: O(2^n)
// Space Complexity: O(n)

// WATCH STRIVER'S VIDEO FOR BETTER UNDERSTANDING
class Solution
{
public:
    int f(int i, int buy, vector<int> prices)
    {
        if (i == prices.size())
        {
            return 0;
        }

        int profit = 0;

        if (buy)
        {
            profit = max(-prices[i] + f(i + 1, 0, prices), 0 + f(i + 1, 1, prices));
        }
        else
        {
            profit = max(prices[i] + f(i + 1, 1, prices), 0 + f(i + 1, 0, prices));
        }

        return profit;
    }
    int maxProfit(vector<int> &prices)
    {
        return f(0, 1, prices);
    }
};