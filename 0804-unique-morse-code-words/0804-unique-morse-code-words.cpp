class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
       vector<string> morse= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       unordered_set<string>ans;
       for(int i=0;i<words.size();i++){
        string str=words[i];
        string ans1="";
        for(int j=0;j<str.size();j++){
            ans1+=morse[str[j]-'a'];
        }
        ans.insert(ans1);
       }
      return ans.size();

    }
};