class Solution
{
public:
    string reverseWords(string s)
    {
        reverse(s.begin(), s.end()); // reverse string
        int n = s.size();
        int left = 0;  // keeps track of the left most letter of the word
        int right = 0; // keeps track of the rightmost letter of the word
        int i = 0;     // keeps track of the current index in the string
        while (i < n)
        {
            while (i < n && s[i] == ' ')
                i++;
            if (i == n)
                break;
            while (i < n && s[i] != ' ')
            {
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right); // reverse each word and make them same as input again
            s[right++] = ' ';
            left = right;
            i++;
        }
        s.resize(right - 1); // remove the white spaces in the end
        return s;
    }
};