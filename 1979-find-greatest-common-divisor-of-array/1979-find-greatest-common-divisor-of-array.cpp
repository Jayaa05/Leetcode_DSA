class Solution {
public:
    int findGCD(vector<int>& v) {
        int mx = *max_element(v.begin(), v.end());
    int mn = *min_element(v.begin(), v.end());
    return gcd(mx,mn);
    }
};