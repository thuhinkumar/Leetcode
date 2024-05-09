class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        int offset = 1;

        for(int i=1;i<n+1;i++){
            if(offset*2 == i){
                offset = i;
            }
            ans.push_back(1+ans[i-offset]);
        }
            return ans;
    }
};