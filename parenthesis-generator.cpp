class Solution {
public:
    void solve(int n,int&open ,int&close,string&o,vector<string>&ans){
        if(open==n && close==n){
            ans.push_back(o);return;
        }
        if(open<n){
            o+="(";
            open++;
            solve(n,open,close,o,ans);
            o.resize(o.length()-1);open--;
        }
        if(close<open){
            o+=")";
            close++;
            solve(n,open,close,o,ans);
            o.resize(o.length()-1);close--;
        }
    }
    vector<string> generateParenthesis(int n) {
        //recursive approach
        vector<string> ans;
        string o="";
        int open=0,close=0;
        solve(n,open,close,o,ans);
        return ans;
     //iterative approach
        // queue<string> q;
        // int open=0,close=0;
        // q.push("(");
        // open++;
        // while(open!=n && close!=n){
        //     int n=q.size();
        //     while(n--){
        //         string f=q.front();q.pop();
        //         if(open<n){
        //             q.push(f+"(");open++;
        //         }
        //         if(open>close){
        //             q.push(f+")");close++;
        //         }
        //     }
        // }
        // vector<string> ans;
        // while(!q.empty()){
        //     ans.push_back(q.front());
        //     q.pop();
        // }
        // return ans;
    }
};
