#include<algorithm>
#include<cstring>
#include<string>

class Solution {
 public:
   bool isVowels(char c){
    switch(c){
        case 'a': case 'e':case 'i': case 'o':case 'u':
        case 'A': case 'E':case 'I': case 'O':case 'U': return true;

        default: return false; 
    }
   }
   string reverseVowels(string s) {
       string v = "aeiouAEIOU";
      int j=s.size()-1;
      int i=0;

      while(i < j){
         while(i<s.length() && !isVowels(s[i])){
            i++;
         }
         while(j>=0 && !isVowels(s[j])){
            j--;
         }
         if(i<j){
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
         }
      }
       return s;
    }
};