/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,multiset<pair<int,int>>> m;
        //vector<pair<pair<int,int>,TreeNode*>> v;
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            int n=q.size();
            while(n--){
                pair<TreeNode*,pair<int,int>> a=q.front();
                // m.insert({a.second.second,{a.second.first,a.first->val}});
                m[a.second.second].insert({a.second.first,a.first->val});
                q.pop();
                if(a.first->left)
                q.push({a.first->left,{a.second.first+1,a.second.second-1}});
                if(a.first->right)
                 q.push({a.first->right,{a.second.first+1,a.second.second+1}});
            }        
        }vector<vector<int>> ans(m.size());
//         for(auto x:m){
//             sort(x.second.begin(),x.second.end());
            
//         }
        for(auto x:m){
            cout<<x.first<<" ";
            for(auto i=x.second.begin();i!=x.second.end();i++){
                cout<<i->first<<" "<<i->second<<endl;
            }
            cout<<endl;
        }
        int j=0;
        for(auto x:m){
            for(auto i=x.second.begin();i!=x.second.end();i++){
                //vector<int> v;
                
                ans[j].push_back(i->second);
            }
            //sort(ans[j].begin(),ans[j].end());
            j++;
        }
        return ans;
        
        //return ans;
    }
};
