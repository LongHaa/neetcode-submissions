class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for(auto i:nums) {
            if(seen.contains(i)) {
                return true;
            } else {
                seen.insert(i);
            }
        }
        return false;
    }
};