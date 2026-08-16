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
void RightView(TreeNode* root,int lev,vector<int>&ans){
    // int rc=0,lc=0;
    // TreeNode* l=root;
    // TreeNode* r=root;
    // ans.push_back(root->val);
    // while(r->right!=NULL){
    //     rc++;
    //     ans.push_back(r->right->val);
    //     r=r->right;
    // }
    // while(l->left!=NULL){
    //     lc++;
    //     if(lc>rc){
    //         ans.push_back(l->left->val);
    //     }
    //     l=l->left;
    // }
    if(!root)return ;
    if(lev==ans.size()) ans.push_back(root->val);
    RightView(root->right,lev+1,ans);
    RightView(root->left,lev+1,ans);

}
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)return ans;
        RightView( root,0,ans);
        return ans;
    }
};