#include<algorithm>

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> mat;
        
       for(int i=0;i<nums.size();i++){
          int left=i+1;
          int right = nums.size()-1;
          int target = -nums[i];

          if(i > 0 && nums[i] == nums[i-1]){
            continue;
          }
          while(left < right){
            int sum = nums[left]+nums[right];
            
            if(target < sum){
                right--;
            }else if(target > sum){
                left++;
            }else{
                mat.push_back({nums[i],nums[left],nums[right]}); 
               left++;
               right--;

            while(left < right && nums[left] == nums[left-1]){
                left++;
            }

             while(left < right && nums[right] == nums[right+1]){
                right--;
            }
            }
          }
       }

       return mat;
    }
};