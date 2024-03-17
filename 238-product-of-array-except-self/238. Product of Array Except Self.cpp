class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> lprod;
        vector<int> rprod;
        vector<int> ans;
        lprod.push_back(1);
        lprod.push_back(nums[0]);
        rprod.push_back(nums.back());

        for(int i=1;i<nums.size();i++){
            lprod.push_back(nums[i]*lprod.back());
        }

        for(int i=nums.size()-2;i>=0;i--){
            rprod.push_back(nums[i]*rprod.back());
        }
        std::reverse(rprod.begin(),rprod.end());
        rprod.push_back(1);

        // for(int num: lprod){
        //     cout << num << " ";
        // }
        // cout << endl;
        // for(int num: rprod){
        //     cout << num << " ";
        // }
        // cout << endl;

        for(int i=0;i<nums.size();i++){
            ans.push_back(lprod[i]*rprod[i+1]);
        }
        return ans;
    }
};