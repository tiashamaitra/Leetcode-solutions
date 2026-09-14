class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans=0;
        int n1=s.size();
        int n2=t.size();
        int i;
        for(i=0;i<n1;i++)
        {
            ans=ans^s[i];
            ans=ans^t[i];
        }
        ans=ans^t[n2-1];
        return ans;
    }
};