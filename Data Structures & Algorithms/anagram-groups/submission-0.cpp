class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> table;

        for(auto s:strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            table[sortedStr].push_back(s);
        }

        vector<vector<string>> res;

        for(auto x:table) {
            res.push_back(x.second);
        }

        return res;
    }
};
