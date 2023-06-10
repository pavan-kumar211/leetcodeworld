class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans="";
        if((str1+str2)!=(str2+str1))
            return ans;
        else 
        {
            int m=str1.size();
            int n=str2.size();
            int gcdOfstr=gcd(m,n);
            for(int i=0;i<gcdOfstr;i++)
            {
                ans=ans+str1[i];
            }
        }
        return ans;
    }
};