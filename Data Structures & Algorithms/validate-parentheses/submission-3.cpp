class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        for (char i : s) {
            if (i == ']') {
                if (st.empty() || st.top() != '[') return false;
            }
            if (i == '}') {
                if (st.empty() || st.top() != '{') return false;
            }
            if (i == ')') {
                if (st.empty() || st.top() != '(') return false;
            }
            if (i == ']' || i == '}' || i == ')') {
                // if(!st.empty())
                st.pop();
                continue;
            }
            st.push(i);
        }
        return st.empty();
    }
};
