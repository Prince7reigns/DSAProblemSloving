class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int n=nums.size();

        for(int fixFirst=0;fixFirst<n;fixFirst++){
            if(fixFirst > 0 && nums[fixFirst]==nums[fixFirst-1]){
                continue;
            }
            for(int fixSecond=fixFirst+1;fixSecond<n;fixSecond++){
              if(fixSecond > fixFirst+1 && nums[fixSecond]==nums[fixSecond-1]){
                continue;
              }
              int left=fixSecond+1;
              int right=n-1;
              long long firstSum=(long long)nums[fixFirst]+nums[fixSecond];

              while(left<right){
               long long finalSum= firstSum+nums[left]+nums[right];

                if(finalSum==target){
                  result.push_back({nums[fixFirst],nums[fixSecond],nums[left],nums[right]});
                  left++;
                  right--;

                  while(left < right && nums[left]==nums[left-1]){
                  left++;
                  }

                  while(left < right && nums[right]==nums[right+1]){
                    right--;
                  }
                }else if(finalSum <target ){
                    left++;
                }else{
                    right--;
                }
              }
            }
        }

        return result;
    }
};