class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //int i=0;
        int j=1;
        int c=1;
        while(j<nums.size())
        {
            if(nums[j]!=nums[j-1])
            {
               
               nums[c]=nums[j];
                 c++;
            }
            j++;
        }
        return c;
    }
};