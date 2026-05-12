class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int prod = 1;
        for(int i=0;i<nums.size();i++) {
            for(int j=0;j<nums.size();j++) {
                if(i!=j) {
                    prod *= nums[j];
                }
            }
            res.push_back(prod);
            prod=1;
        }

        return res;
    }
};
