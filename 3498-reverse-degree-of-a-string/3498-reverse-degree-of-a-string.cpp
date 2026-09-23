class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int i;
        int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+(-(s[i]-'a')+26)*(i+1);
        }
        return sum;
    }
};