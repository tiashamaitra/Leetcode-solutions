class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        
        int l=0;
        int r=n-1;
        vector<pair<int,int>>v;
        int i;
        for(i=0;i<n;i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        while(l<r)
        {
            int sum=v[l].first+v[r].first;
            if(sum==target)
            {
                return {v[l].second,v[r].second};
            }
            else if(sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return {};
        
    }
};