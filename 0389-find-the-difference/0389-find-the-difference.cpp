class Solution {
public:
    char findTheDifference(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i;
        for(i=0;i<n2;i++)
        {
            if(i==n1)
            {
                return t[i];
            }
            if(s[i]!=t[i])
            {
                return t[i];
            }
        }
        return t[n2-1];
        
        
    }
};