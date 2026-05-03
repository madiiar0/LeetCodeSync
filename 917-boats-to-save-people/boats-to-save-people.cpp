class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int l=0, r=people.size()-1, sz=0, lst=people.size()-1;
        while(l<=r){
            if(l == r){
                sz+=(lst-r);
                sz++;
                break;
            } else if(people[l]+people[r] <= limit){
                l++;
                r--;
                sz+=(lst-r);
                lst=r;
            } else{
                r--;
            }
        }
        return sz;
    }
};
