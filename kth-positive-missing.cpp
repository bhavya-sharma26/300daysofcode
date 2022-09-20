class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int a=1,l=k;
        
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        while(l){
            if(m.find(a)==m.end()){
               a++;
                l--;
            }
            else{
                a++;
            }
        }
        return a-1;
    }
};
