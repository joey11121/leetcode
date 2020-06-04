class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int i;
        char tmp; 
        if(len == 0){
            return; 
        }else{
            if(len % 2 == 1){
                for(i = 0; i < (len - 1) / 2; i++){
                    tmp = s[i];
                    s[i] = s[len - i - 1];
                    s[len - i - 1] = tmp; 
                }
            }else{
                for(i = 0; i <= (len - 1) / 2; i++){
                    tmp = s[i];
                    s[i] = s[len - i - 1];
                    s[len - i - 1] = tmp; 
                }
            }
        }
    }
};