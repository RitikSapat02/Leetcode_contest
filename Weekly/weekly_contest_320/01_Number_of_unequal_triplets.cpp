class Solution
{
public:
    int unequalTriplets(vector<int> &nums)
    {
        int length = nums.size();
        int count = 0;
        int i = 0;
        while (i < length)
        {
            int j = i + 1;
            while (j < length)
            {
                int k = j + 1;
                while (k < length)
                {
                    if (nums[i] != nums[j] && nums[j] != nums[k] && nums[i] != nums[k])
                    {
                        count++;
                    }
                    k++;
                }
                j++;
            }
            i++;
        }

        return count;
    }
};