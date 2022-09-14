class Solution {
public:
    void solve(string s,int i,vector<string>&v,string o){
        if(i>=s.length()){v.push_back(o);return;}
        if((s[i]>=65&& s[i]<=91)||(s[i]>=97 && s[i]<=122 )){
            
            solve(s,i+1,v,o+(char)toupper(s[i]));
            solve(s,i+1,v,o+(char)tolower(s[i]));
        }
        else{
            solve(s,i+1,v,o+s[i]);
        }
    }
    vector<string> letterCasePermutation(string s) {
        // set<string> v;
        // vector<string> so;
        // queue<string> q;
        // q.push(s);
        // v.insert(s);
        // for(int i=0;i<s.length();i++){
        //     if((s[i]>=65 && s[i]<=91)||(s[i]>=97 && s[i]<=122)){
        //         char c=s[i];
        //         int n=q.size();
        //         string st;
        //         while(n--){
        //             st=q.front();
        //             q.pop();
        //             string left=st.substr(0,i);
        //             string right=st.substr(i+1,s.length());
        //             q.push(left+(char)toupper(c)+right);
        //             v.insert(left+(char)toupper(c)+right);
        //             q.push(left+(char)tolower(c)+right);
        //             v.insert(left+(char)tolower(c)+right);
        //         }
        //        // v.push_back(st);
        //     }
        // }
        // for(auto i=v.begin();i!=v.end();i++){
        //     so.push_back(*i);
        // }
        // return so;
        
        
        
    
    vector<string> v;
        string o="";
        solve(s,0,v,o);
    return v;
    }
};
