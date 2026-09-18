class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int>ans(temperatures.size(),0);
       stack<int>tube;
       for(int i=0;i<temperatures.size();i++)
       {
        while(!tube.empty()&&temperatures[i]>temperatures[tube.top()])
        {
           int pastday=tube.top();
           tube.pop();
           ans[pastday]=i-pastday;
        }
        tube.push(i);
       }
       return ans;
    }
};