// https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i = 0 ; i < s.size() ; i++){
            char ch = s[i];
            
            if(ch == 'a' || ch == 'b'){
                st.push(ch);
            }
            else{
                if(st.size() >= 2){
                    char x = st.top();
                    st.pop();
                    char y = st.top();
                    st.pop();
                    if(x != 'b' || y != 'a')
                        return false;
                }
                else{
                    return false;
                }
            }
        }
        
        return st.size() == 0;
    }
};
