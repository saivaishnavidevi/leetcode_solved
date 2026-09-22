class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
        int ans;
        int a=0,b=1;
        for(int i=2;i<=n;i++){
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};