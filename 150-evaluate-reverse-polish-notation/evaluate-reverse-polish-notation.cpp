class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto to: tokens){
            if(to == "+" || to == "-" || to == "/" || to == "*"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(to == "+") st.push(a + b);
                if(to == "-") st.push(b - a);
                if(to == "/") st.push(b / a);
                if(to == "*") st.push(a * b);
            } else{
                st.push(stoi(to));
            }
        }
        return st.top();
    }
};