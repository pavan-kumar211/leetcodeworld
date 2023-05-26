class Solution {
public:
    bool isPowerOfFour(int n) {
        //base case
        if(n==0)
        return false;
        if(n==1)
        return true;
        //recursive case
        if(n%4==0)
        {
            return isPowerOfFour(n/4);
        }
        return false;
    }
};