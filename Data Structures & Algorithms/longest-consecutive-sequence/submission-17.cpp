class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> us;
        int longestSeq = 0;
        for(int num : nums) {
            us.insert(num);
        }

        for(int num : us) {
            if(us.find(num-1) == us.end()) {
                int length = 1;
                while(us.find(num+length) != us.end()) {
                    length++;
                }
                longestSeq = max(longestSeq, length);
            }
        }
        return longestSeq;
    }
};
