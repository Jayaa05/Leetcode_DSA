class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>f;
        for(int i=0;i<nums.size();i++){
            f.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            int x=k*i;
            if(f.find(x)==f.end()){
                return x;
            }
        }
        return k*(nums.size()+1);

    }
};