class Solution {
public:
    void sortColors(vector<int>& nums) {
      int zeroItem=0;
      int oneItem=0;
      int twoItem=0;
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]==0)
          {
              zeroItem++;
          }
          else if(nums[i]==1)
          {
              oneItem++;
          }
          else
          {
              twoItem++;
          }
      }
       
    int i=0;
    while(zeroItem!=0)
    {
        nums[i]=0;
        zeroItem--;
        i++;
    }

            while(oneItem!=0)
            {
                nums[i]=1;
                oneItem--;
                i++;
            }
            while(twoItem!=0)
            {
                nums[i]=2;
                twoItem--;
                i++;
      } 
           
    }
};