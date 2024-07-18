// WATCH STRIVER

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        int left = 0, right = m - 1, top = 0, bottom = n - 1;
        vector<int> ans;

        while (top <= bottom && left <= right)
        {

            // left to right
            // no need to check condition for top and bottom
            // as it was just checked above

            for (int i = left; i <= right; i++)
            {
                ans.push_back(mat[top][i]);
            }
            top++;

            // top to bottom
            // no need to check condition for left and right
            // as it was just checked above and since has not been changed
            // and top and bottom will be checked in the loop

            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(mat[i][right]);
            }
            right--;

            // right to left
            // need to check condition for top and bottom condition
            // as it was just changed above and  has not been checked since
            // and left and right will be checked in the loop

            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }

            // bottom to top
            // need to check condition for left and right condition
            // as it was just changed above and  has not been checked since
            // and top and bottom will be checked in the loop

            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};