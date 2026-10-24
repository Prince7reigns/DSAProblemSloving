class Solution {
public:
    bool isPalindrome(int x) {

        if(llabs(x)!=x){
            return false;
        }

        long long tempX=x;
        long long final=0;
        
        while(tempX > 0){
            long long rem=0;
            rem=tempX % 10;

            final = final*10 + rem;

            tempX=tempX/10;
        }
            return final==x;
    }
};