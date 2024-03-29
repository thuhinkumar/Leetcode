class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        bool inserted = false;
        for(auto &interval: intervals){
            if(newInterval[1] < interval[0]){
                if(!inserted){
                    ans.push_back(newInterval);
                    inserted = true;
                }
                ans.push_back(interval);
            } 
            else if(newInterval[0]> interval[1]) {
                ans.push_back(interval);
            } else{
                newInterval  = {min(interval[0],newInterval[0]),max(interval[1],newInterval[1])};
            }
        }
        if(!inserted)
            ans.push_back(newInterval);
        return ans;
    }
};