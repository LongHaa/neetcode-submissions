class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> map;
        unordered_map<char,int> map1;
        for(auto x : s) {
            map[x]++;
        }
        for(auto x : t) {
            map1[x]++;
        }
        return (map1 == map);
        
    }
};
