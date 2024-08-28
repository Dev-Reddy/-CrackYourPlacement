/* Structure for tree and linked list

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution
{
public:
    // Function to convert binary tree to doubly linked list and return it.
    void inorder(Node *root, vector<int> &v)
    {
        if (!root)
            return;

        inorder(root->left, v);
        v.push_back(root->data);
        inorder(root->right, v);
    }

    // Function to convert binary tree to doubly linked list and return it.
    Node *bToDLL(Node *root)
    {
        // your code here

        vector<int> v;
        int i;
        inorder(root, v);
        int siz = v.size();
        Node *nhead = new Node(v[0]);
        Node *temp = nhead;
        nhead->left = NULL;
        for (int i = 1; i < siz - 1; i++)
        {
            Node *n = new Node(v[i]);
            Node *p = n;
            temp->right = p;
            p->left = temp;
            temp = temp->right;
        }
        if (siz > 1)
        {
            Node *last = new Node(v[siz - 1]);
            temp->right = last;
            last->left = temp;
            last->right = NULL;
        }
        return nhead;
    }
};
