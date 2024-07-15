// WATCH STRIVER'S VIDEO

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;

        // i keeps track of unique portion and sits at its end
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] != nums[j])
            {
                // if a number does not match the end of unique portion, then it also unique
                // we put it next to the end of unique portion
                nums[i + 1] = nums[j];
                i++;
            }
        }
        // return the size of new array (last index of unique portion + 1)
        return i + 1;
    }
};