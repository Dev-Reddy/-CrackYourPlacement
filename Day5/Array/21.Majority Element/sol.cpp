// STRIVER'S VIDEO

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int cnt = 0, el = -1;

        for (auto i : nums)
        {
            if (cnt == 0)
            {
                cnt = 1;
                el = i;
            }
            else if (i == el)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }

        return el;
    }
};