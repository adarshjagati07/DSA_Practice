class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int glen = g.size();
        int slen = s.size();
        if(glen==0 || slen==0) return 0;
        if(g.empty() || s.empty()) return 0;
        int l = 0;
        int r = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(l < slen && r < glen){
            if(g[r] <= s[l]){
                r++;
            }
            l++;
        }
        return r;
    }
};