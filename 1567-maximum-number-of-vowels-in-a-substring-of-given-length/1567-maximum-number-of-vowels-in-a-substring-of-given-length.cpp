class Solution {
public:
    int maxVowels(string s, int k) {
       int i=0;
       int j=0;
       int ans=INT_MIN;
       int count=0;
       while(j<s.size())
       {
           if(j-i+1==k)
           {
            //    count=0;
               if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
               count++;

               ans=max(ans,count);

               if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
               count--;

               i++;
           }
           else if( s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' )
           count++;
           j++;
       }
       return ans; 
    }
};