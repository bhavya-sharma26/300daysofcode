class Solution {
public:
    int countSubstrings(string s, string t) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<t.length();j++){
                int x=i;
                int y=j;
                int d=0;
                while(x<s.length() && y<t.length()){
                    if(s[x]!=t[y])d++;
                    if(d==1)ans++;
                    if(d==2)break;
                    x++;y++;
                }
            }
        }
        return ans;
    }
};
