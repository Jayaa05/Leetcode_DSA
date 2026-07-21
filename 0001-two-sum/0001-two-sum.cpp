class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> f;
        f[nums[0]]=0;
        for(int i=1;i<nums.size();i++){
            int sum=target-nums[i];
            if(f.find(sum)!=f.end()){
                return {f[sum],i};
            }
            else f[nums[i]]=i;
        }
        return {};
    }
};