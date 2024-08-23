// User function template for C++

class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &mat)
    {
        // code here
        int index = -1;
        for (int i = 0; i < mat.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < mat[0].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    break;
                }
                count++;
            }
            if (count == mat[0].size())
            {
                index = i;
                break;
            }
        }
        if (index == -1)
        {
            return -1;
        }
        for (int i = 0; i < mat.size(); i++)
        {
            if (mat[i][index] == 0 && i != index)
            {
                return -1;
            }
        }
        return index;
    }
};