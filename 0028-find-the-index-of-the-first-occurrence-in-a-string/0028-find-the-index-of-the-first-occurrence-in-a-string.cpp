class Solution {
public:
    int strStr(string haystack, string needle) {
    
        int index = haystack.find(needle);
        if(index != std::string::npos){
            return index;
        }else{
            return -1;
        }
        
    }
};