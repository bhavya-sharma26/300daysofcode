class Solution {
public:
    int dp[1005][3];
    int ok(int n,int eggs){
        if(dp[n][eggs]!=-1){
            return dp[n][eggs];
        }
        if(n<=1)return n;
        if(eggs==1)return n;
        int min1=1e6;
        for(int i=1;i<n;i++){
            min1=min(min1,max(ok(i-1,eggs-1),ok(n-i,eggs))+1);
        }
        return dp[n][eggs]=min1;
    }
    int twoEggDrop(int n) {
        memset(dp,-1,sizeof(dp));
        return ok(n,2);
    }
};
