class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        
        unordered_map<int, int> mp;
        for (int i = 0; i < sorted_nums.size(); i++) {
            if (mp.find(sorted_nums[i]) == mp.end()) {
                mp[sorted_nums[i]] = i;
            }
        }
        
        vector<int> ans;
        for (int num : nums) {
            ans.push_back(mp[num]);
        }
        
        return ans;
    }
};