class Solution {
public:
    bool palindrome(string s){
        for(int i=0;i<=s.length()/2;i++){
            if(s[i]!=s[s.length()-i-1])return false;
        }
        // while(s<=e){
        //     if(st[s++]!=st[e--])return false;
        // }
        return true;
    }
    void solve(vector<string>&v,string s, int i, vector<vector<string>>&ans){
        if(i>=s.length()){ans.push_back(v);return;}
        for(int j=i;j<s.length();j++){
            if(palindrome(s.substr(i,j-i+1))){
                v.push_back(s.substr(i,j-i+1));
                solve(v,s,j+1,ans);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        solve(path,s,0,ans);
        return ans;
    }
};
