class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &a, int n)
    {

        // code here
        long long int product = a[0];
        vector<long long int> ans(n, 1);
        for (int i = 1; i < n; i++)
        {
            ans[i] = product;
            product = product * a[i];
        }

        product = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            product = product * a[i + 1];
            ans[i] *= product;
        }
        return ans;
    }
};