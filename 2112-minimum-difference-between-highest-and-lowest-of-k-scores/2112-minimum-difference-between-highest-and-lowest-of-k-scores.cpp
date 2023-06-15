class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int minDiff=INT_MAX;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
        while(j<nums.size())
        {
            if(j-i+1 == k)
            {
                int res = abs(nums[i]-nums[j]);
                minDiff=min(res,minDiff);
                i++;
            }
            j++;
        }
        return minDiff;
    }
};