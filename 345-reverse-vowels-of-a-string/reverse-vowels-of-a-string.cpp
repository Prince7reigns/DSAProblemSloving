#include<algorithm>
#include<cstring>
#include<string>

class Solution {
 public:
   void swap(char &x,char &y){
    char temp = x;
    x=y;
    y=temp;
   }
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
         while(i<j && !isVowels(s[i])){
            ++i;
         }
         while(i<j && !isVowels(s[j])){
            --j;
         }
         if(i<j){
            swap(s[i],s[j]);
            ++i;
            --j;
         }
      }
       return s;
    }
};