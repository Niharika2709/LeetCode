class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<bool> seen(256, false);
        int left= 0 ;
        int maxLen = 0;

        for(int right =0 ; right <s.length();right++){
            while(seen[s[right]]){
                seen[s[left]]= false;
                left ++;

            }
            seen[s[right]] = true;
            maxLen= max (maxLen,right-left+1);
        }
        return maxLen;
    }
};