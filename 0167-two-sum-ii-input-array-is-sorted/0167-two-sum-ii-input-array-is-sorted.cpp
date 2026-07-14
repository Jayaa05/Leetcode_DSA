class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int> arr;
        int n=num.size();
        int i=0,j=n-1;
        while(i<j){
             int sum=num[i]+num[j];
             if(sum==target){
                arr.push_back(i+1);
                arr.push_back(j+1);
                break;
             }
             else if(sum>target){
                j--;
             }
             else i++;

        }
        return arr;
    }
};