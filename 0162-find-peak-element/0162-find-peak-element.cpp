class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int startIndex=0;
        int lastIndex=nums.size()-1;
        int mid=(startIndex+lastIndex)/2;
         if(nums.size()==2)
            {
                if(nums[0]<nums[1])
                    return 1;
                else 
                    return 0;
            }
        while(startIndex<=lastIndex)
        {
            if(mid==nums.size()-1)
                return mid;
            
            if(mid==0)
                return 0;
            
            
            if(nums[mid-1]<nums[mid] && nums[mid+1]<nums[mid])
                return mid;

            if(nums[mid]<nums[mid+1])
            {
                startIndex=mid+1;
            }
            else
            {
                lastIndex=mid;
            }            
            mid = (startIndex + lastIndex)/2;
            
        }
        return 0;
    }
};