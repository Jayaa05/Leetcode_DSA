class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.size();
        vector<int>last(26,0);
        vector<int> seen(26,false);
        stack<char> st;
        for(int i=0;i<n;i++){
             last[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            char c=s[i];
            if(seen[c-'a']) continue;
            while(!st.empty() && st.top()>c && last[st.top()-'a']>i){
                seen[st.top()-'a']=false;
                st.pop();
            }

            st.push(c);
            seen[c - 'a'] = true;
        }
         string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};