class Solution {
public: 
    string addzero(string s, int len1, int len2){
        string t; 
        for(int i = 0; i < len1 - len2; i++){
            t.insert(0, "0");
        }
        t.append(s, 0, len2);
        return t; 
    }
    string addBinary(string a, string b) {
        int alen = a.size(), blen = b.size(), len;
        int i, j; 
        bool carryout = 0;
        string c;   //The answer that we need to return; 
        if(alen > blen){
            b = addzero(b, alen, blen);
            len = alen; 
        }
        else if(blen > alen){
            a = addzero(a, blen, alen);
            len = blen; 
        }
        else{
            len = alen; 
        } 
        for(i = len - 1; i >= 0; i--){
            if(a.at(i) == '0' && b.at(i) == '0'){
                if(carryout == 1){
                    c.insert(0, "1"); 
                }else{
                    c.insert(0, "0");
                }
                carryout = 0; 
            }
            if((a.at(i) == '1' && b.at(i) == '0') || (a.at(i) == '0' && b.at(i) == '1')){
                if(carryout == 1){
                    c.insert(0, "0");
                    carryout = 1; 
                }else{
                    c.insert(0, "1");
                    carryout = 0;
                }
            }
            if(a.at(i) == '1' && b.at(i) == '1'){
                if(carryout == 1){
                    c.insert(0, "1");
                }else{
                    c.insert(0, "0");
                }
                carryout = 1;
            }
        }
        if(carryout == 1)
            c.insert(0, "1");
        
        return c;  
    }
};