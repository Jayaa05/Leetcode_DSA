class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long d=0;
        int p=x;
        while(x>0){
            d=d*10+x%10;
            x/=10;
        }
        return p==d;
    }
};