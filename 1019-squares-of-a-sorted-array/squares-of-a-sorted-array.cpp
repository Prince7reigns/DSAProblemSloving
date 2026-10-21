class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n=nums.size()-1;
        int left = 0;
        int right = n;
       vector<int> result(n+1);

       while(left <= right){
        int leftsqure = nums[left]*nums[left];
        int rightsqure = nums[right]*nums[right];

        if(leftsqure < rightsqure){
          result[n]=rightsqure;
          right--;
        }else{
           result[n]=leftsqure; 
            left++;
        }
        n--;
       }
       return result;

    }
};