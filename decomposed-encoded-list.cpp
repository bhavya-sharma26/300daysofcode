class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> v;
        int k=0;
       // unordered_map<int,int> freq;
        for(int i=0;i<nums.size()/2;i++){
           for(int j=k;j<nums[2*i];j++){
               v.push_back(nums[2*i+1]);
           }        }
//         for(auto x:freq){
//             for(int i=0;i<x.first;i++){
//                 v.push_back(x.second);
//             }
//         }
       
        return v;
    }
};
//1 2 3 4 5 6
//0 1 2 3 4 5
//
