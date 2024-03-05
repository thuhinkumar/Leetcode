class Solution {
public:
    string interpret(string command) {
        std::string ans = "";
        bool al = false;

        for(auto &c : command){
            if(c == 'G'){
                ans += {"G"};
            } 
            else if(c == 'l'){
                al = true;
            }
            else if(c == ')'){
                if(al){
                    ans += {"al"};
                    al = false;
                }
                else{
                    ans += {"o"};
                }
            }
        }
        return ans;
    }
};