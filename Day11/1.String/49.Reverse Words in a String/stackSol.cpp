class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;

        int i = 0;
        while (i < s.size())
        {
            if (s[i] == ' ')
            {
                i++;
            }
            else
            {
                int j = i;
                while (j < s.size() && s[j] != ' ')
                {
                    j++;
                }
                string temp = s.substr(i, j - i);
                st.push(temp);
                i = j;
            }
        }

        string ans = "";
        ans += st.top();
        st.pop();
        while (!st.empty())
        {
            ans += " ";
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;

        int i = 0;
        while (i < s.size())
        {
            if (s[i] == ' ')
            {
                i++;
            }
            else
            {
                int j = i;
                while (j < s.size() && s[j] != ' ')
                {
                    j++;
                }
                string temp = s.substr(i, j - i);
                st.push(temp);
                i = j;
            }
        }

        string ans = "";
        ans += st.top();
        st.pop();
        while (!st.empty())
        {
            ans += " ";
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
