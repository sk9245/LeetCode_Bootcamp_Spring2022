// https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
       stack<int> st;
        for(int i = 0; i < s.length() ; i++){ 
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else {
                if(st.empty())
                    return false;
                char t = st.top();
                if (s[i] == ')'){
                    if (t != '(')
                        return false;
                    else
                        st.pop();
                }
                else if (s[i] == '}'){
                    if (t != '{')
                        return false;
                    else
                        st.pop();
                } else if (s[i] == ']'){
                    if (t != '[')
                        return false;
                    else
                        st.pop();
                } 
            }
        }
        
        if (st.empty())
            return true;
        return false;
    }
};

// O(n)
