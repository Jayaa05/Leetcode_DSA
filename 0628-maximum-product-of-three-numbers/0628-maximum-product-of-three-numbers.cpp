class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
     if(n==3) return nums[n-1]*nums[n-2]*nums[n-3];
       sort(nums.begin(),nums.end());
       int max1=nums[n-1];
       int max2=nums[n-2];
       int max3=nums[n-3];
       int min=nums[0];
       int min1=nums[1];
       int x1=max1*max2*max3;
       int x2=max1*min*min1;
       return (x1>x2)?x1:x2;
    }
};