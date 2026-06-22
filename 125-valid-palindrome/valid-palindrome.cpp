class Solution {
public:
    bool isalpha(char ch) {
    if((ch >= '0' && ch <= '9') ||
       (ch >= 'a' && ch <= 'z') ||
       (ch >= 'A' && ch <= 'Z')) {
        return true;
    }

    return false;
}
    bool isPalindrome(string s) {
        int st=0;
        int end=s.length()-1;
        while(st<end){
            if(!isalpha(s[st])){
                st++ ;
                continue;
            }
            if(!isalpha(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            
            end--;
            st++;
        }
        return true;
    }
};