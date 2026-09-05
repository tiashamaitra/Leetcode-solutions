class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        int i;
        unordered_map<string,vector<string>>mp;
        for(i=0;i<n;i++)
        {
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        int num=mp.size();
        vector<vector<string>>v(num);
        i=0;
        for(auto it:mp)
        {
            v[i]=it.second;
            i++;
        }
        return v;
    }
};