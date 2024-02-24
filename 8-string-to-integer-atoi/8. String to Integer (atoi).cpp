class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        int c = 0;
        bool neg = false;

        while(s[c] ==  ' '){
            c++;
        }
        if(s[c] == '-'){
            neg = true;
        }
        if(s[c] == '+' || s[c] == '-'){
            c++;
        }

        while('0'<=s[c] && s[c]<='9' && c<s.size()){
            int digit = s[c] - '0';
            if(ans > INT_MAX/10 || ans == INT_MAX / 10 && digit >7){
                return neg ? INT_MIN : INT_MAX;
            }
            ans = ans*10 + digit;
            c++;
        }
        if(neg)
            return -1 * ans;
        return ans;
    }
};