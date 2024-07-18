class Solution
{
public:
    bool helper(vector<vector<char>> &board, string word, int i, int j, int index, int m, int n)
    {
        if (index == word.length())
        {
            return true;
        }

        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] == '!' || board[i][j] != word[index])
            return false;

        board[i][j] = '!';

        bool top = helper(board, word, i - 1, j, index + 1, m, n);
        bool right = helper(board, word, i, j + 1, index + 1, m, n);
        bool bottom = helper(board, word, i + 1, j, index + 1, m, n);
        bool left = helper(board, word, i, j - 1, index + 1, m, n);

        board[i][j] = word[index];
        return top || right || bottom || left;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        int m = board.size();
        int n = board[0].size();

        int index = 0;

        // First search the first character
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {

                if (board[i][j] == word[0])
                {
                    if (helper(board, word, i, j, index, m, n))
                        return true;
                }
            }
        }

        return false;
    }
};