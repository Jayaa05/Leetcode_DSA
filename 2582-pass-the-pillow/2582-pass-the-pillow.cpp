class Solution {
public:
    int passThePillow(int n, int time) {
       int fullr=time/(n-1);
       int lft=time%(n-1);
       if(fullr%2==0) return lft+1;
       else return  n-lft;
       return -1;
    }
};
