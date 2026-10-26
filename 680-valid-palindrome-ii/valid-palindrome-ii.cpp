class Solution {
public:
    bool isPalindrome(string &s, int i, int j){
        while(i<j){
           if(s[i]==s[j]){
                i++;
                j--;
            } else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.size()-1;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else if(s[i]!=s[j]){
                int tempJ=j;
                int tempI=i;
                tempJ--;
                tempI++;
                if(isPalindrome(s,i,tempJ) || isPalindrome(s,tempI,j)){
                  return true;
                }else return false;
            }
        }

        return true;
    }
};