#include<cstring>
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> ns;
        stack <char> nt ;

        for(char i: s){
          if(i=='#'){
            if(!ns.empty()){
                ns.pop();
            }
          }else{
            ns.push(i);
          }
        }

          for(char i : t){
          if(i=='#'){
            if(!nt.empty()){
                nt.pop();
            }
          }else{
            nt.push(i);
          }
        }

        bool result = (ns == nt);

        return result;
    }
};