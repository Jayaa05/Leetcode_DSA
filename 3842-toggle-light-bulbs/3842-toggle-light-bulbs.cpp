class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int>f;
        for(int i=0;i<bulbs.size();i++){
            f[bulbs[i]]++;
        }
        vector<int>ans;
        for(auto it :f){
            if(f[it.first]%2!=0) ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};