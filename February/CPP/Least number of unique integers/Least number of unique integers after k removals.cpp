class Solution {  
public:
  int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> countMap;
        for (int num : arr) {
            countMap[num]++;
        }

        vector<pair<int, int>> counts;
        for (auto& pair : countMap) {
            counts.push_back(pair);
        }
        sort(counts.begin(), counts.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });

        int uniqueCount = counts.size();
        for (auto& pair : counts) {
            if (k >= pair.second) {
                k -= pair.second;
                uniqueCount--;
            } else {
                break;
            }
        }
        
        return uniqueCount;
    }
};
