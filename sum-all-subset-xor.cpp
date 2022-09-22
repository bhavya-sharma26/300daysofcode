class Solution {
public:
    int solve(vector<int> n,int i,int sum){
        if(i==n.size()){
           return sum;
        }
        
        int in=solve(n,i+1,sum^n[i]);
        int ex=solve(n,i+1,sum);
        return in+ex;
        
    }
    int subsetXORSum(vector<int>& n) {
        int i=0;
        
        return solve(n,i,0); 
    }
    
};
