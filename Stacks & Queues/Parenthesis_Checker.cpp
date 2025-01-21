bool isParenthesisBalanced(string& s) {
        // code here
        stack<char> st;
        int n=s.size();
        int i=0;
        while(i<n){
            if(s[i]=='{'||s[i]=='['||s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(s[i]=='}'){
                    if(st.top()!='{'){
                        return false;
                    }
                }
                else if(s[i]==']'){
                    if(st.top()!='['){
                        return false;
                    }
                }
                else if(s[i]==')'){
                    if(st.top()!='('){
                        return false;
                    }
                }
                st.pop();
            }
            i++;
        }
        return st.empty();
    }
