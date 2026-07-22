class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> arr;
        int n=nums.size();
        for(int k=0;k<n-2;k++){
            if(k>0 && nums[k]==nums[k-1])continue;
               int i=k+1;
               int j=n-1;
               while(i<j){
                int sum=nums[i]+nums[j]+nums[k];
                      if(sum==0){
                        arr.push_back({nums[i],nums[j],nums[k]});
                        while(i<j && nums[i]==nums[i+1])i++;
                        while(i<j && nums[j]==nums[j-1])j--;
                        i++;
                        j--;
                      }
                    
                else if(sum>0) j--;
                else i++;
               }

        }
               return arr;









    }
};