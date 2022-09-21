class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        
        if(nums1.size()<nums2.size()){
           vector<int> a=nums1;
            nums1=nums2;nums2=a;
        }
        
        for(int i=0;i<nums1.size();i++){
            m[nums1[i]]++;
        }
        int j=0;vector<int> v;
        for(int i=0;i<nums2.size();i++){
            if(m.find(nums2[i])!=m.end()){
                m[nums2[i]]--;
                if(m[nums2[i]]>=0)
                v.push_back(nums2[i]);
            }
        }
        set<int>s;
        for(int i=0;i<v.size();i++){
            s.insert(v[i]);
        }
        v.clear();
        for(auto i=s.begin();i!=s.end();i++){
            v.push_back(*i);
        }
        
        // for(auto x:m){
        //     if(x.second<=0){
        //         v.push_back(x.first);
        //     }
        // }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<nums1.size();i++){
            cout<<nums1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<nums2.size();i++){
            cout<<nums2[i]<<" ";
        }
        return v;
        
        
        
    }
};
