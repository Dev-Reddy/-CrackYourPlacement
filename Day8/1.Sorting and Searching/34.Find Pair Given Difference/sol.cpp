class Solution
{
public:
    int findPair(int n, int x, vector<int> arr)
    {
        // Sort the entire array, not just the first n elements
        sort(arr.begin(), arr.end());

        int i = 0, j = 1;

        while (i < n && j < n)
        {
            int diff = arr[j] - arr[i];
            if (i != j && diff == x)
            {
                return 1;
            }
            else if (diff < x)
            {
                j++;
            }
            else
            {
                i++;
            }
        }

        return -1;
    }
};
