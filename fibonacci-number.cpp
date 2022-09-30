class Solution {
public:
    int f(int n){
        if(n==0)return 0;
        if(n==1)return 1;
        int a= f(n-1);
        int b=f(n-2);
        return a+b;
    }
    int fib(int n) {
        return f(n);
    }
};
