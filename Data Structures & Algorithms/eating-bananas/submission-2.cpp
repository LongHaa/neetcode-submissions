class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = 0;
        for(int s:piles) {
            if(s>right) {
                right = s;
            }
        }
        int res = right;
        while(left <= right) {
            int speed = (left+right) / 2;

            long long totalTime = 0;
            for(int i:piles) {
                totalTime += (i+speed-1)/speed;
            }

            if(totalTime <=h) {
                res = speed;
                right = speed - 1;
            } else {
                left = speed + 1; 
            }
        }
        return res;
    }
};
