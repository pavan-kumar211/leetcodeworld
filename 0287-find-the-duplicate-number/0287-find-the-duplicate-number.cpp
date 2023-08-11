class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // map<int ,int> m;
        // int temp=-1234;
        // for(int i=0;i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        // }
        // map<int,int> ::iterator itr;
        // for(itr=m.begin();itr!=m.end();itr++)
        // {
        //     if(itr->second>1)
        //         temp=itr->first;
        // }
        // return temp;


        sort(nums.begin(),nums.end());
        int i=0;
        //int j=i+1;
        int temp=-1324;
        while(i<nums.size()-1)
        {
            if(nums[i]==nums[i+1])
            {
                temp=nums[i];
                break;
            }
            else
            {
                i++;
                //j++;
            }
        }
        return temp;
    }
};