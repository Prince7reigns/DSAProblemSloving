class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int slow=nums[0];
       int fast = nums[0];

       do{
        slow=nums[slow];
        fast=nums[nums[fast]];
       }while(slow!=fast);
        return slow;
    }
};