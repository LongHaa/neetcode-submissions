class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> res(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++) {
            int t = temperatures[i];

            while(!st.empty() && t > st.top().first) {
                auto value = st.top();
                st.pop();
                res[value.second] = i - value.second;
            }
            st.push({t,i});
        }
        return res;
    }
};
