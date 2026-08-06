class Solution {
public:
  int dig(int n){
    int pro=1;
    while(n){
        pro*=n%10;
        n/=10;
    }
    return pro;
  }
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n*t;i++){
            int x=dig(i);
            if(x%t==0 && i>=n){
                return i;
            }
        }
        return -1;
    }
};