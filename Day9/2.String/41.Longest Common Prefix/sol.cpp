class Solution
{
public:
    string longestCommonPrefix(vector<string> &s)
    {
        sort(s.begin(), s.end());
        string ans = "";

        string f = s[0], l = s[s.size() - 1];

        for (int i = 0; i < min(f.size(), l.size()); i++)
        {
            if (f[i] != l[i])
            {
                return ans;
            }
            ans += f[i];
        }

        return ans;
    }
};