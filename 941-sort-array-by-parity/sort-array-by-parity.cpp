class Solution {
public:
    void swap(int &x,int &y){
        int temp=x;
        x=y;
        y=temp;
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;

        while(i<j){
            while(i<j && nums[i]%2==0){
                i++;
            }

            while(i<j && nums[j]%2!=0){
                j--;
            }

            swap(nums[i],nums[j]);
            i++;
            j--;
        }

        return nums;
    }
};