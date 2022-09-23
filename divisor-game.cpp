class Solution {
public:
    bool prime(int n){
        for(int i=2;i<=n/2;i++){
            if(n%i==0)return false;
        }
        return true;
    }
    
    bool div(int n,bool alice){
        if(n==1){
            if(alice)return false;
            return true;
        }
        if(prime(n)){
            return div(n-1,!alice);
        }
        else{
            int i;
            for(i=n-1;i>=2;i--){
                if(n%i==0)break;
            }
            return div(n-i,!alice);
        }
    }
    bool divisorGame(int n) {
        return n%2==0;
    }
};
//5
//4
//2
//1
//7
//6
//3
//1
