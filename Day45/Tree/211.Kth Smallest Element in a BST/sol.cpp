/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    void f(TreeNode *root, vector<int> &Inorder)
    {

        if (root == NULL)
            return;

        if (root->left != nullptr)
            f(root->left, Inorder);
        Inorder.push_back(root->val);
        if (root->right != nullptr)
            f(root->right, Inorder);
    }
    int kthSmallest(TreeNode *root, int k)
    {

        vector<int> v;
        f(root, v);

        return v[k - 1];
    }
};