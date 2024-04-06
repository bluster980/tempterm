class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ')' || s[i] == '('){
                if(!st.empty()){
                    if(s[i] == ')'){
                        if(s[st.top()] == '('){
                            st.pop(); continue;
                        }
                        else{
                            st.push(i);
                        }
                    }
                    else st.push(i);
                }
                else st.push(i);
            }
        }
        while(!st.empty()){
            s.erase(s.begin() + st.top());
            st.pop();
        }
        return s;
    }
};