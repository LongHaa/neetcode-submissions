class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        int m[26] = {0};
        for(char c : s) {
            m[c - 'a']++;
        }

        for(char c : t) {
            m[c-'a']--;
            if(m[c-'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};
