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
    void traverse(TreeNode *root, vector<TreeNode *> &nodes)
    {
        if (root == NULL)
        {
            return;
        }
        nodes.push_back(root);
        traverse(root->left, nodes);
        traverse(root->right, nodes);
    }
    void flatten(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        vector<TreeNode *> nodes;
        traverse(root, nodes);
        for (int i = 1; i < nodes.size(); i++)
        {
            root->left = nullptr;
            root->right = nodes[i];
            root = root->right;
        }
    }
};