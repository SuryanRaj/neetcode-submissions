class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>cardata;
        int fleetcount=0;
        double maxtimesofar=0.0;

        for(int i=0;i<position.size();i++)
        {
            double time=(double)(target-position[i])/speed[i];
            cardata.push_back({position[i],time});
        }
        sort(cardata.rbegin(),cardata.rend());
        for(int i=0;i<cardata.size();i++)
        {
            double currtime=cardata[i].second;
            if(currtime>maxtimesofar)
            {
                maxtimesofar=currtime;
                fleetcount++;
            }
        }
        return fleetcount;
    }
};