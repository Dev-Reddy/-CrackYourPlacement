class Solution
{

    bool isValid(string s, int i, int j)
    {
        while (i < j)
        {
            if (s[i] != s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

public:
    bool validPalindrome(string s)
    {
        int i = 0, j = s.size() - 1;

        while (i < j)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else // when you find a mismatch
            {
                return isValid(s, i + 1, j) || isValid(s, i, j - 1);
            }
        }

        return true;
    }
};