class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i;
        int j=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                continue;
            }
            if(nums[i]!=val)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};