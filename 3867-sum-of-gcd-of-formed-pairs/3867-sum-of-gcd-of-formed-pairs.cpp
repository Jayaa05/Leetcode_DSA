class Solution {
public:
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
    long long gcdSum(vector<int>& nums) {
          vector<int> mx;
          int max=nums[0];
       vector<int> prefixgcd;
          for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
         mx.push_back(max);
          prefixgcd.push_back(gcd(nums[i],max));
          }
      
     sort(prefixgcd.begin(),prefixgcd.end());
     int i=0;
     int j=prefixgcd.size()-1;
     long long sum=0;
     while(i<j){
        int ans=gcd(prefixgcd[i],prefixgcd[j]);
        sum+=ans;
        i++;
        j--;
     }
     return sum;

    }
};