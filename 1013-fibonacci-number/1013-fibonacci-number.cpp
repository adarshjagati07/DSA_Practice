class Solution {
public:
    int fib(int n) {
        if(n==0||n==1){
            return n;
        }
       int a=0,b=1,fibo=0;
        for( int i=1;i<n;i++){
           fibo=a+b;
            a=b;
            b=fibo;
        }
        return fibo;
    }
};