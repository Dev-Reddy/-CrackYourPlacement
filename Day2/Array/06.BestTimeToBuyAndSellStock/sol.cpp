// WATCH STRIVER'S VIDEO FOR BETTER UNDERSTANDING

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        std::cin.tie(nullptr)->sync_with_stdio(false);
        int maxPro = 0;
        int minCost = prices[0];

        for (auto i : prices)
        {
            maxPro = max(maxPro, i - minCost);
            minCost = min(minCost, i);
        }

        return maxPro;
    }
};