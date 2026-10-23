class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());

       if(!tokens.empty()){
        int MIN=tokens[0];
         if(power < MIN ){
            return 0;
        }else if(tokens.size() ==1){
           return 1;
        }
       }

        int i=0;
        int j=tokens.size()-1;
        int score=0;
        int maxScore=0;

        while(i<=j){
            if(power >=tokens[i]){
                power = power-tokens[i];
                i++;
                score++;
                maxScore=max(maxScore,score);
            }else if(score >=1){
               power= power+tokens[j];
               j--;
               score--;
               maxScore=max(maxScore,score);
            }
        }
        return maxScore;
    }
};