class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x){
            int num = x%10;

            if (ans>INT_MAX/10||(ans == INT_MAX/10 && num> INT_MAX%10)){
                return 0;
            }

            if (ans<INT_MIN/10||(ans == INT_MIN/10 && num < INT_MIN%10)){
                return 0;
            }

            ans *=10;
            ans += num;
            x=x/10;
        }
        return ans;
    }
};