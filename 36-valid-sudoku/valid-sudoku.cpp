class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N=9;
        for(int i=0; i<N; i++){
            set<char> st;
            for(int j=0; j<N; j++){
                if(board[i][j] == '.') continue;
                if(st.find(board[i][j]) != st.end()){
                    return false;   
                }
                st.insert(board[i][j]);
            }
        }

        for(int i=0; i<N; i++){
            set<char> st;
            for(int j=0; j<N; j++){
                if(board[j][i] == '.') continue;
                if(st.find(board[j][i]) != st.end()){
                    return false;
                }
                st.insert(board[j][i]);
            }
        }

        for(int i=1; i<=N/3; i++){
            for(int j=1; j<=N/3; j++){
                set<char> st;
                for(int k=(i-1)*3+1; k<=i*3; k++){
                    for(int h=(j-1)*3+1; h<=j*3; h++){
                        if(board[k-1][h-1] == '.') continue;
                        if(st.find(board[k-1][h-1]) != st.end()){
                            return false;
                        }
                        st.insert(board[k-1][h-1]);
                    }
                }
            }
        } 
        return true;
    }
};