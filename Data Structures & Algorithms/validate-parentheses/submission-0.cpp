class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            // opening brackets
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // closing brackets
            else {
                if (st.empty()) return false;

                char top = st.top();
                st.pop();

                if ((ch == ')' && top != '(') ||
                    (ch == '}' && top != '{') ||
                    (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
