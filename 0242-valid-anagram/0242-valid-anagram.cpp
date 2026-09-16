class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2) return false;
        unordered_map<char,int>mp;
        int i;
        for(i=0;i<n1;i++)
        {
            mp[s[i]]++;
        }
        for(i=0;i<n2;i++)
        {
            if(mp.find(t[i])!=mp.end())
            {
                mp[t[i]]--;
            }
            if(mp[t[i]]==0)
            {
                mp.erase(t[i]);
            }
        }
        return mp.size()==0;

    }
};