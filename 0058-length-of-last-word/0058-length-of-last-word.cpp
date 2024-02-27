class Solution {
public:
    int lengthOfLastWord(string s) {
        int strLen = s.length();
        int count = 0;
        
        for(int i = strLen-1; i >= 0; i--){
            if(s[i]==' ' && count != 0){
                break;
            }
            else if(s[i]==' ' && count == 0){
                while(s[i]==' '){
                    i--;
                }
                i++;
            }
            else{
                count++;
            }
        }
        return count;
    }
};