class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int e = s.length()-1;
        while(e>i){
            while(e>i && !isalnum(s[i])){
                i++;
            }
            while(e>i && !isalnum(s[e])){
                e--;
            }
            if(tolower(s[i])!=tolower(s[e]))
                return false;
            e--;
            i++;
        }
        return true;
    }
};
