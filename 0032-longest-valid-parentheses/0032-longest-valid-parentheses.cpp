class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<int> st;
        st.push(-1);              // base index
        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(i);
            }
            else
            {
                if (st.top() != -1 &&
                    ((s[i] == ')' && s[st.top()] == '(') ||
                     (s[i] == '}' && s[st.top()] == '{') ||
                     (s[i] == ']' && s[st.top()] == '[')))
                {
                    st.pop();
                    maxi = max(maxi, i - st.top());
                }
                else
                {
                    // mismatch or unmatched closer: nothing can span past i
                    while (!st.empty()) st.pop();
                    st.push(i);   // new base
                }
            }
        }
        return maxi;
    }
};