class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end());

       int i=0;
       int j=1;
       int count=0;

       while(i<nums.size() && j < nums.size()){
        if(i==j){
            j++;
            continue;
        }
          int diff = nums[i]-nums[j];

          if(abs(diff) < k){
            j++;
          }else if(abs(diff) > k){
            i++;
          }else{
            count++;
            j++;

            while(i>0 &&nums[i]==nums[i-1]){
                i++;
            }

            while(j < nums.size() && nums[j]==nums[j-1]){
                j++;
            }
          }
       }

        return count;
    }
};