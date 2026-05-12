class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        unordered_map<char,int> um;
        for(char c : s) {
            um[c]++;
        }

        for(char c : t)  {
            if(um[c] == 0) {
                return false;
            }
            um[c]--;
        }
        return true;
    }
};
