class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        int rightSum=sum;
        for(int i=0;i<nums.size();i++)
        {
            leftSum+=nums[i];
            
            if(leftSum==rightSum)
                return i;
                rightSum-=nums[i];
        }
        return -1;
    }
};