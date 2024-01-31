class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ft(temperatures.size(),0);
        deque<int> dt;
        for(int i= temperatures.size()-1;i>=0;i--){
            if(dt.empty()){
                dt.push_front(i);
                ft[i] =0;
            }else{
                while(!dt.empty() && temperatures[i]>=temperatures[dt.front()]){
                    dt.pop_front();
                }
                if(dt.empty()){
                    ft[i] =0;
                }
                else{
                    ft[i] = dt.front()-i;
                }
                dt.push_front(i);
            }
        }
        return ft;
    }
};
