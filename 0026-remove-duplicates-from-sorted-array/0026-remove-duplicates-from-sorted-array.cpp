class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i;
        int j=0;
        for(i=1;i<n;i++)
        {
            if (nums[i]==nums[i-1])
            {
                continue;
            }
            else
            {
                nums[j]=nums[i-1];
                j++;
            }

        }
        nums[j]=nums[n-1];
        return j+1;
    }
};