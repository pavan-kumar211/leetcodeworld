class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int ans=INT_MIN;
        int i=0;
        int j=0;
        int sum=0;
        while(j<nums.size())
        {
            sum=sum+nums[j];
            if(j-i+1==k)
            {
                // double temp=sum/double(k);
                ans=max(ans,sum);
                sum=sum-nums[i];
                i++;
            }
            j++;
        }
        return ans/double(k);
    }
};