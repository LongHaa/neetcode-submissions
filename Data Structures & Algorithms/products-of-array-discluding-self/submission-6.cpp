class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int totalProd = 0;
        int zero = 0;
        for(int num : nums) {
            if(num == 0) zero++;
            else {
                if(totalProd == 0) {
                    totalProd = num;
                } else {
                    totalProd *= num;
                }
            }
        }
        vector<int> res;    
        for(int num : nums) {
            if(zero > 1) {
                res.push_back(0);
            } else if(zero == 1) {
                if(num == 0) {
                    res.push_back(totalProd);
                } else {
                    res.push_back(0);
                }
            } else {
                res.push_back(totalProd / num);
            }
        }
        return res;
    }
};
