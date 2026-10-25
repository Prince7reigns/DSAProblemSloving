class Solution {
public:
    string pushDominoes(string dominoes) {
        string newDom= "L"+dominoes+"R";

        int i=0;
        int j=1;

        while(j<newDom.length()){
            if (i >= newDom.length() || j >= newDom.length()) {
              break;
              }
           while(j<newDom.length() && newDom[j]=='.'){
            j++;
           }

           while(i<newDom.length() && newDom[i]=='.'){
            i++;
           }

           if(newDom[i]==newDom[j]){
            int  tempI=i;
            while(tempI<j){
              newDom[tempI]=newDom[j];
              tempI++;
            }
            i=j;
            j++;
           }else if(newDom[i]=='L' && newDom[j]=='R'){
            i=j;
            j++;
           }else if(newDom[i]=='R' && newDom[j]=='L'){
            int tempI=i;
            int tempJ=j;

            while(tempI<=tempJ){
              if(tempI==tempJ){
               break;
              }else{
                newDom[tempI]='R';
                newDom[tempJ]='L';
                tempJ--;
                tempI++;
              }
            }
            i=j;
            j++;
           }
        }

        return newDom.substr(1, newDom.size()-2);
    }
};