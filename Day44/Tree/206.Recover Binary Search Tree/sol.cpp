class Solution
{

private:
    TreeNode *first, *prev, *middle, *last;

    void inorder(TreeNode *root)
    {

        if (!root)
            return;
        inorder(root->left);
        if (prev and root->val < prev->val)
        {

            // First violation
            if (!first)
            {
                first = prev;
                middle = root;
            }

            // Second violation
            else
            {
                last = root;
            }
        }
        prev = root;
        inorder(root->right);
    }

public:
    void recoverTree(TreeNode *root)
    {

        inorder(root);

        if (first and last)
            swap(first->val, last->val);
        else if (first and middle)
            swap(first->val, middle->val);
    }
};