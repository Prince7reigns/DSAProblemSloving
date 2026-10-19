class Solution {
public:
    int trap(vector<int>& height) {
        int total=0;
        int i=0;
        int j=height.size()-1;
        int maxl=0,maxr=0;
        while(i<j){
            maxl=max(maxl,height[i]);
            maxr=max(maxr,height[j]);

            if(maxl<maxr){
                total+=maxl-height[i];
                i++;
            }else{
                 total+=maxr-height[j];
                j--;
            }
        }

        return total;
    }
};