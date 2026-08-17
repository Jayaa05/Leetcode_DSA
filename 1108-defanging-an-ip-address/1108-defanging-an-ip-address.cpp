class Solution {
public:
    string defangIPaddr(string add) {
        string ans="";
        for(int i=0;i<add.size();i++){
            if(add[i]=='.'){
            ans+="[.]";
            }
          else  ans+=add[i];
        }
        return ans;
    }
};