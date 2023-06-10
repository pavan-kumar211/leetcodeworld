class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> arr(candies.size(),0);
        int max=INT_MIN;
        max= *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extraCandies)>=max)
            {
                arr[i]=true;
            }
            else
            {
                arr[i]=false;
            }
        }
        return arr;
    }
};