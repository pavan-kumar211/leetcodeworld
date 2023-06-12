class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> m;
        for(auto x : strs)
        {
            string str=x;
            sort(x.begin(),x.end());
            m[x].push_back(str);
        }

        map<string,vector<int>> :: iterator itr;
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            ans.push_back(itr->second);
        }
        return ans;
    }
};