class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        int i=0;
        int j=0;
        string arr="";
        while(i<m && j<n)
        {
            arr.push_back(word1[i++]);
            arr.push_back(word2[j++]);
            // i++;
            // j++;
        }
        while(i<m)
        {
            arr.push_back(word1[i++]);
            // i++;
        }
        while(j<n)
        {
            arr.push_back(word2[j++]);
            // j++;
        }
        return arr;
    }
};