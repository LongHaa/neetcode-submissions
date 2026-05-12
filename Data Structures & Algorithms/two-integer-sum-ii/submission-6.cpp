class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,j;
        bool found = false;
        for (i=0;i<numbers.size();i++) {
            for (j=i+1;j<numbers.size();j++){
                if ((numbers[i] + numbers[j]) == target) {
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
        return {i+1,j+1};
    }
};
