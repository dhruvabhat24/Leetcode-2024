class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> count(2,0);
        for(int sud: students){
            count[sud]++;
        }
        for(int i =0;i<sandwiches.size();i++){
            if (count[sandwiches[i]]==0) return sandwiches.size()-i;
            count[sandwiches[i]]--;
        }
        
        return 0;
    }

};
