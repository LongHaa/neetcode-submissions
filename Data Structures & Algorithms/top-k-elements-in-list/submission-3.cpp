class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> res;
        for(auto i:nums) {
            m[i]++;
        }
        for(int i=0;i<k;i++) {
            int max = 0;
            int num;
            for(auto x:m) {
                if(max < x.second) {
                    max = x.second;
                    num = x.first;
                }
            }
            res.push_back(num);
            m[num] -= max;
        }
        return res;
    }
};
