class Solution {
public:

    void image(long long &x,bool &flag){
        long long tempX=x;

        if(!flag){
            tempX/=10;
        }

        int rem=0;
        while(tempX > 0){
          rem=tempX%10;
          x=x*10+rem;
          tempX/=10;
        }
    }
    
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
       vector<long long> ans;
       long long start=0;
       bool flag=true;

       if(intLength%2==0){
        start= pow(10,(intLength/2)-1);
       }else{
        start= pow(10,((intLength+1)/2-1));
         flag=false;
       }

       for(int i=0;i<queries.size();i++){
         long long total = 9 * pow(10, (intLength + 1) / 2 - 1);
        if(queries[i]<=total){
            long long firstHalf=start+queries[i]-1;
        image(firstHalf,flag);
        
            ans.push_back(firstHalf);
        }else{
            ans.push_back(-1);
        }
       }

       return ans;
    }
};