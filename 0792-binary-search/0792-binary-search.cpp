class Solution {
public:
    int bs(vector<int>& nums, int start, int end, int target) {
        //base case
        if (start>end)
            return -1;
        //processing
        int mid=(start + end)/2;
        
        if (nums[mid]==target)
            return mid;
    //recursive case
        if (nums[mid] < target)
            return bs(nums,mid + 1, end,target);
        else
            return bs(nums,start, mid - 1,target);
    }
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int result = bs(nums, start, end, target);
        return result;
    }
};
