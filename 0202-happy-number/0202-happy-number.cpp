class Solution {
public:
    bool solve(int n,unordered_set<int>&st)
    {
        if(n==1)
        {
            return true;
        }
        
        int rem=0;
        int sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+(rem*rem);
            n=n/10;
        }
        if(st.find(sum)==st.end())
        {
            st.insert(sum);
        }
        else
        {
            return false;
        }
        if(solve(sum,st))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isHappy(int n) {
        unordered_set<int>st;
        return solve(n,st);

    }
};