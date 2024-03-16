class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int max_len = 0;
        int balance = 0;
        unordered_map<int,int> seen;
        seen[0] = -1;
        
        for(int i=0;i<nums.size();i++){
            //calulate balance
            if(nums[i] == 0){
                balance++;
            } else {
                balance--;
            }
            // if this balance has been seen before it is the first instacne of it
            if(seen.find(balance)!=seen.end()){//found
                max_len = max(max_len,i - seen[balance]);
            } else {
                seen[balance] = i;
            }
        }
        return max_len;
    }
};