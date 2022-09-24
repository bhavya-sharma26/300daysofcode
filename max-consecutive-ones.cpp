class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                x=0;
            }
            else{
                x++;
            }
            ans=max(ans,x);
            
        }
        return ans;
    }
};
