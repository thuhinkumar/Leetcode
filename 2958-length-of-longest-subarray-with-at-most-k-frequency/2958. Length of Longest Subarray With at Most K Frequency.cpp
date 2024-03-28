class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> counts;
        int l = 0;
        int max_len = 0;
        
        for(int i=0;i<nums.size();i++){
            counts[nums[i]]++;
            while(counts[nums[i]] > k){
                counts[nums[l]]--;
                l++;
            }
            max_len = max(max_len,i-l+1);
        }
        return max_len;
    }
};