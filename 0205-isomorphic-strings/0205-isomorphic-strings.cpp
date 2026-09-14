class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2) return false;
        int i;
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        for(i=0;i<n1;i++)
        {
            if(mp1.find(s[i])!=mp1.end() && mp1[s[i]]!=t[i])
            {
                return false;
            }
            if(mp2.find(t[i])!=mp2.end() && mp2[t[i]]!=s[i])
            {
                return false;
            }
            mp1[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }
        return true;
    }
};