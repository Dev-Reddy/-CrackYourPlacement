class Solution
{
public:
    int getCount(Node *root, int l, int h)
    {
        // your code goes here

        if (!root)
            return 0;

        int ans = 0;

        if (root->data >= l && root->data <= h)
        {
            ans++;
        }

        int left = getCount(root->left, l, h);
        int right = getCount(root->right, l, h);

        return ans + left + right;
    }
};