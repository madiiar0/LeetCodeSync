#define f first
#define s second

class Solution {
public:
    int left[100100],right[100100];
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int, int>> s1, s2;
        s1.push({-1, -1});
        s2.push({-1, heights.size()});
        for(int i=0; i<heights.size(); i++){
            while(s1.top().f >= heights[i]) s1.pop();
            left[i]=s1.top().s;
            s1.push({heights[i], i});
        }

        for(int i=heights.size()-1; i>=0; i--){
            while(s2.top().f >= heights[i]) s2.pop();
            right[i]=s2.top().s;
            s2.push({heights[i], i});
        }

        int ans=0;
        for(int i=0; i<heights.size(); i++){
            ans=max(ans, ((right[i]-1)-(left[i]+1)+1) * heights[i] );
        }
        return ans;
    }
};