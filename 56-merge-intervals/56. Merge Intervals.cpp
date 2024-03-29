class Solution {
public:
    bool sortcol(const vector<int>& v1, const vector<int>& v2)
    {
        return v1[0] < v2[0];
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;

        //sort by start and then end as second
        sort(intervals.begin(),intervals.end(),[](const vector<int> &v1,const vector<int>&v2){return v1[0] <v2[0];});
        ans.push_back(intervals[0]);
        //iterate over every interval starting at index 1
        for(int i=1;i<intervals.size();i++){
            //if the start of the second interval is less than the end of the first merge
            if(intervals[i][0] <= ans.back()[1]){
                ans.back()[1] = max(ans.back()[1], intervals[i][1]); 
            } else{
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};