class Solution {
public:
    void count(char*vowel,int&i,string&o,int&ans,int n){
        if(o.length()>=n){
            ans++;return;
        }
        for(int j=i;j<5;j++){
            o+=vowel[j];
            count(vowel,j,o,ans,n);
            o.resize(o.length()-1);
        }
        
    }
    int countVowelStrings(int n) {
        int ans=0;
        char vowel[]={'a','e','i','o','u'};
        int i=0;
       // for(int i=0;i<5;i++){
           string o="";
            count(vowel,i,o,ans,n);
        //}
        return ans;
    }
};
/*
          ""
   a   e   i   o   u






*/
