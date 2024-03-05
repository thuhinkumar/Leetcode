class Solution {
public:
    int minimumLength(string s) {
        int start = 0;
        int end = s.size()-1;
        
        while(s[start] == s[end] && start<end){
            char current = s[start];
            while(s[start] == current && start<=end){
                start++;
            }
            while(s[end] == current && start<end){
                end--;
            }
            cout << "START: " << s[start] << " END: " << s[end] << endl;  
        }
        return end - start+1;
    }
};