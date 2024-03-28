class Solution {
public:
    int maxSubarrayLength(vector<int>& n, int k) {
       int size = n.size(), maxSize = 0;

        unordered_map<int, int> mp;

        int i = 0, j = 0;
        
        while(j < size and i <= j){

            while(j < size and mp[n[j]] < k){
                mp[n[j]]++;
                maxSize = max(maxSize, j-i+1);
                j++;
            }

            while(i <= j and j < size and mp[n[j]] >= k){
                mp[n[i]]--;
                i++;
            }
        }

        return maxSize;
    }
};
