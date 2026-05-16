class Solution {
public:
    int trap(vector<int>& height) {
        int mx=0, ans=0, p_ans=0, p=0;
        
        for(int i=0; i<height.size(); i++){
            if(mx <= height[i]){
                ans+=p_ans;
                p_ans=0;
                mx=height[i];
                p=i;
            } else{
                p_ans+=(mx-height[i]);
            }
        }
        p_ans=0,mx=0;
        for(int i=height.size()-1; i>=p; i--){
            if(mx <= height[i]){
                ans+=p_ans;
                p_ans=0;
                mx=height[i];
            } else {
                p_ans+=(mx-height[i]);
            }
        }
        return ans;
    }
};