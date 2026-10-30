class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n2=magazine.size();
        int n1=ransomNote.size();
        int i;
        unordered_map<char,int>mp;
        for(i=0;i<n2;i++)
        {
            mp[magazine[i]]++;
        }
        int c=0;
        for(i=0;i<n1;i++)
        {
            if(mp.find(ransomNote[i])!=mp.end() && mp[ransomNote[i]]>0)
            {
                mp[ransomNote[i]]--;
                c++;
            }
        }
        return c==n1;


    }

};