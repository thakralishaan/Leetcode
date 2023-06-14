class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto c:s)
        {
            if(c=='(' or c=='{' or c=='[') {    //opening brackets added to stack
                st.push(c); 
            }
            else {               // if not closing brackets then we check if top of stack == c if so then pop else false
                if(st.empty() or (st.top()=='(' and c!=')') or (st.top()=='{' and c!='}') or (st.top()=='[' and c!=']')) return false;
                st.pop();             // this remove the one pair of brackets from stack move on to next pair
            }
        }
        return st.empty();        // if stack is empty means true all bracket pairs handled
    }
};