class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow =0;

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[slow]){
                nums[slow+1]=nums[i];
                slow++;
            }
        }
        return slow+1;
    }
};