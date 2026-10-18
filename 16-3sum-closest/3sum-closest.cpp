class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int k=0;
        int sum=0;
        int minDiff=INT_MAX;

        while(k<nums.size()-2){
            int i=k+1;
           int j=nums.size()-1;
           while(i<j){
            int currSum=nums[i]+nums[j]+nums[k];
            int currMinDiff=abs(currSum-target);
            
            if (currMinDiff < minDiff) {
                    minDiff = currMinDiff;
                    sum = currSum;
            }

            if(currSum < target){
                i++;
            }else if(currSum > target){
                j--;
            }else{
                return currSum; 
            }
           }  
           k++;  
        }
         return sum;
    }
};