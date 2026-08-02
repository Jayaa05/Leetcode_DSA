class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& s) {
        int n=s.size();
        unordered_map<int,int> f;
        for(int i=0;i<n;i++){
            f[s[i]]=i;
        }
        sort(s.begin(),s.end(),greater<int>());
        vector<string> ans(n);
        for(int i=0;i<n;i++){
              if(i==0){
                int x=f[s[i]];
                ans[x]="Gold Medal";
    
              }
              else if(i==1){
                int x=f[s[i]];
                ans[x]="Silver Medal";
              }
            else if(i==2){
                int x=f[s[i]];
                ans[x]="Bronze Medal";
            }
            else {
                int x=f[s[i]];
                ans[x]=to_string(i+1);
            }
        }
        return ans;
    }
};