int reverse(int x){
    int p=x;
//x=(x<0)?-x:x;
long d=0;
while(x!=0){
    int r=x%10;
    if (d > 214748364 || (d == 214748364 && r > 7)) return 0;
        if (d < -214748364 || (d == -214748364 && r < -8)) return 0;

    d=d*10+r;
    x/=10;
}
//if(-2147483648<=x<=2147483647){  
//d=(p<0)?-d:d;
return d; 
//else return 0;
}