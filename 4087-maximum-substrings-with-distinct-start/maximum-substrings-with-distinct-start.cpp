class Solution {
public:
    int maxDistinct(string s) {
        set<char> st;
        for(auto to: s) st.insert(to);
        return (int)st.size();
    }
};