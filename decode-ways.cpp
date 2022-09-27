class Solution {
public:
   
    int count(string s,int i,vector<int>&dp){
    if(i>=s.size()){
        return 1;
    }else if(s[i]=='0'){
        return 0;
    }
        else if(dp[i]!=-1)return dp[i];
        else if(i==s.size()-1){
            return 1;
        }
        else if(s[i]=='1' || (s[i]=='2' && (s[i+1]>=48 && s[i+1]<=54))){
            return dp[i]=count(s,i+1,dp)+count(s,i+2,dp);
        }
        else{
            return dp[i]=count(s,i+1,dp);
        }
    
}
    int numDecodings(string s) {
        vector<int>dp(s.size(),-1);
        return count(s,0,dp);
        
    }
};
/*
1   26

*/
