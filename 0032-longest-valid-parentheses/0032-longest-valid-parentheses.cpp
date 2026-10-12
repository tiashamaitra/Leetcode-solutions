class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<int> st;
        st.push(-1);              // base index
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                st.push(i);
            }
            else
            {
                int t = st.top();
                if (t != -1 && s[i]==')' && s[t]=='(')
                {
                    st.pop();
                    maxi = max(maxi, i - st.top());
                }
                else if (t != -1 && s[i]=='}' && s[t]=='{')
                {
                    st.pop();
                    maxi = max(maxi, i - st.top());
                }
                else if (t != -1 && s[i]==']' && s[t]=='[')
                {
                    st.pop();
                    maxi = max(maxi, i - st.top());
                }
                else
                {
                    st.push(i);   // unmatched closer acts as a barrier
                }
            }
        }
        return maxi;
    }
};