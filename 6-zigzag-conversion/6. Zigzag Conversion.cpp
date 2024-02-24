class Solution {
public:
    string convert(string s, int numRows) {

        if(numRows == 1 || s.size() < numRows){
            return s;
        }
        vector<vector<char>> ans(numRows);
        bool down = false;
        int y = 0;

        for(int i=0;i<s.size();i++){
            if(y == 0 || y == numRows-1){
                down = !down;
            }
            if(down){
                ans[y].push_back(s[i]);
                y++;
            }
            else{
                ans[y].push_back(s[i]);
                y--;
            }
        }
        string ret = "";
        for(int i=0;i<numRows;i++){
            ret = ret + string(ans[i].begin(),ans[i].end());
        }
        return ret;
    }
};