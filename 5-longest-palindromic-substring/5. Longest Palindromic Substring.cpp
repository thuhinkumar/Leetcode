class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";

        for(int i =0;i<s.size();i++){
            int l = i+1,r = i-1;
            string curr = {s[i]};
            while(l>=0 && r<=s.size()-1){
                if(s[l] == s[r]){
                    curr =s[l] +curr+ s[r];
                    l++;
                    r--;
                } else{
                    break;
                }
            }
            if(ans.size()<curr.size()){
                ans = curr;
            }
        }

        for(int i =0;i<s.size();i++){
            int l = i,r = i+1;
            string curr = "";
            while(l>=0 && r<=s.size()-1){
                if(s[l] == s[r]){
                    curr =s[l] +curr+ s[r];
                    l--;
                    r++;
                } else{
                    break;
                }
            }
            if(ans.size()<curr.size()){
                ans = curr;
            }
        }
        return ans;
    }
};