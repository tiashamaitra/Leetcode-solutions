class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int i,s=0;
        for(i=0;i<n;i++)
        {
            s=s+nums[i];
        }
        return sum-s;

    }
};