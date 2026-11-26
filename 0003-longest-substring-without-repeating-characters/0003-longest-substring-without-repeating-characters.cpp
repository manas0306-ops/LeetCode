class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int hash[255];
        fill(hash,hash+255,-1);
        int r=0,l=0,len=0;
        while(r<s.length()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            len=max(len,r-l+1);
            hash[s[r]]=r;
            r++;
        }
        return len;
    }
};