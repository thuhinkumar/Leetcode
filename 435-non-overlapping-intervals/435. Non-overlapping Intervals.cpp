class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        //sort by start index
        int ans = 0;
        sort(intervals.begin(),intervals.end(),[](const vector<int> &v1, const vector<int> &v2){return v1[0] < v2[0];});
        //loop through every interval
        int end = intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] >= end){ //no overlap
                end = intervals[i][1];
            } 
            else{ //overlaps
                ans++;
                end = min(intervals[i][1],end);
            }
        }
        //if there is a overlap remove the interval with the highest end
        return ans;
    }
};