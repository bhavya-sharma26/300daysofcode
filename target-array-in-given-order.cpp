class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(index.size());
        for(int i=0;i<index.size();i++){
            if(i<=index[i])
            target[index[i]]=nums[i];
            else{
                for(int j=i-1;j>=index[i];j--){
                    target[j+1]=target[j];
                }
                target[index[i]]=nums[i];
            }
        }  
        for(int i=0;i<target.size();i++){
            cout<<target[i]<<" ";
        }
        cout<<endl;
        return target;
    }
};
