class Solution {
public:
    int missingInteger(vector<int>& nums) {
unordered_set<int>f;
for(int i=0;i<nums.size();i++){
    f.insert(nums[i]);
}
int prefix=nums[0];
for(int i=1;i<nums.size();i++){
    if(nums[i]==nums[i-1]+1)
    prefix+=nums[i];
    else break;
}
while(f.count(prefix))prefix++;
return prefix;
 
    }
};