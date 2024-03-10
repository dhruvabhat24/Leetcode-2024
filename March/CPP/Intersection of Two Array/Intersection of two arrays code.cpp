class Solution {
    unordered_set<int> s;
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                s.insert(nums1[i]);
                i++;+j++;
            } else if (nums1[i]<nums2[j]) i++;
            else j++;
        }
        for(auto& x: s){
            ans.push_back(x);
        }
        return ans;
    }
};
