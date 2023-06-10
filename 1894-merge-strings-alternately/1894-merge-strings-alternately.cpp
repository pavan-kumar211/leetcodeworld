class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        int i=0;
        int j=0;

                            // without extra space

        while(i<word1.size() && j<n)
        {
            word1.insert(i+1,1,word2[j]);
            i=i+2;
            j++;
        }

        while (j < n)
        {
            word1+=word2[j];
            j++;
            i++;
        }
        return word1;
    }
};


                                // with extra space

        // string word3 = "";
        // while (i<m && j<n)
        // {
        //     word3.push_back(word1[i++]);
        //     word3.push_back(word2[j++]);
        // }
        // while (i < m)
        // {
        //     word3.push_back(word1[i++]);
        // }
        // while (j < n)
        // {
        //     word3.push_back(word2[j++]);
        // }
        // return word3;
//     }
// };