class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        int i;
        int mini=INT_MAX;
        for(i=0;i<n;i++)
        {
            mini=min(mini,(int)strs[i].size());
        }
        string ans="";
        int j;
        for(j=0;j<mini;j++)
        {
            char ch=strs[0][j];
            for(i=1;i<n;i++)
            {
                if(strs[i][j]!=ch)
                {
                    return ans;
                }
                
            }
            ans+=ch;
        }
        return ans;
        
    }
};