class Solution
{
public:
    int maxPathDown(TreeNode *root, int &maxi)
    {
        if (root == NULL)
            return 0;
        int left = max(0, maxPathDown(root->left, maxi));
        int right = max(0, maxPathDown(root->right, maxi));
        maxi = max(left + right + root->val, maxi);
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode *root)
    {
        int maxi = INT_MIN;
        maxPathDown(root, maxi);
        return maxi;
    }
};