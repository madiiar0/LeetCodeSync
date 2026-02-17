class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> v;
        for(int i=0; i<boxes.size(); i++){
            if(boxes[i] == '1') v.push_back(i);
        }

        vector<int> ans;
        for(int i=0; i<boxes.size(); i++){
            int cnt=0;
            for(int j=0; j<v.size(); j++){
                cnt+=abs(i-v[j]);
            }
            ans.push_back(cnt);
;        }
        return ans;
    }
};