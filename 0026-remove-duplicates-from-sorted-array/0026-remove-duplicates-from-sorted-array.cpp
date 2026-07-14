class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int i=0,r=1,j=1;
        while(j<n){
            if(nums[j-1]==nums[j]){
                j++;
                continue;
            }
            nums[i+1]=nums[j];
            i++;
            j++;
            r++;
        }
        return r;
    }
};