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
         if(v.find(s[i]) == string::npos){
            i++;
        }else if(v.find(s[j]) == string::npos){
            j--;
        }else{
            char temp = s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
      }
       return s;
    }
};