#include<algorithm>
#include<cstring>
#include<string>

class Solution {
 public:
   string reverseVowels(string s) {
       string v = "aeiouAEIOU";
      int j=s.size()-1;
      int i=0;

      while(i < j){
         while(i<s.length() && (s[i]!='a' && s[i]!='A' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='e' && s[i]!='E' && s[i]!='u' && s[i]!='U')){
            i++;
         }
         while(j>=0 && (s[j]!='a' && s[j]!='A' && s[j]!='i' && s[j]!='I' && s[j]!='o' && s[j]!='O' && s[j]!='e' && s[j]!='E' && s[j]!='u' && s[j]!='U')){
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