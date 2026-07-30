class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int ans = 0;
        
        ans += min(n, 8) * 1;           // 1st push tier (1–8)
        if (n > 8)  ans += min(n - 8, 8) * 2;  // 2nd push tier (9–16)
        if (n > 16) ans += min(n - 16, 8) * 3; // 3rd push tier (17–24)
        if (n > 24) ans += (n - 24) * 4;       // 4th push tier (25–26)
        
        return ans;
    }
};