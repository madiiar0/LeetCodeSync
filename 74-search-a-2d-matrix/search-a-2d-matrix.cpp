class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size(); 
        cout<<n<<" "<<m<<"\n";
        for(int l=1, r=n*m; l<=r;){
            int mid=(l+r)/2; 
            cout<<mid<<": ";
            int i=mid/m + (mid%m != 0) - 1;
            int j=mid%m - 1;
            if(j == -1) j=m-1;
            cout<<i<<" "<<j<<"\n";
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] < target) l = mid+1;
            else r = mid-1;
        }
        return false;
    }
};