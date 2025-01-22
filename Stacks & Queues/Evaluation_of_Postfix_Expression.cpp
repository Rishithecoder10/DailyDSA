int evaluate(vector<string>& arr) {
        // code here
        stack<int> st;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]!="+"&&arr[i]!="/"&&arr[i]!="*"&&arr[i]!="-"){
                int num=stoi(arr[i]);
                st.push(num);
            }
            else{
                int num2=st.top();
                st.pop();
                int num1=st.top();
                st.pop();
                if(arr[i]=="+"){
                    st.push(num1+num2);
                }
                else if(arr[i]=="-"){
                    st.push(num1-num2);
                }
                else if(arr[i]=="*"){
                    st.push(num1*num2);
                }
                else if(arr[i]=="/"){
                    int ans=int(num1/num2);
                    st.push(ans);
                }
            }
        }
        return st.top();
    }
