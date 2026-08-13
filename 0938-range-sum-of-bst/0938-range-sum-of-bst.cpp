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
void sum(TreeNode* root,int l,int h,int &val){
    if(root==NULL)return;
    if(root->val>l){
        sum(root->left,l,h,val);
    }
     if(root->val<h){
        sum(root->right,l,h,val);
    }
    if(root->val>=l && root->val<=h){
        val+=root->val;
    }

}
    int rangeSumBST(TreeNode* root, int low, int high) {
       int val=0;
       sum( root, low,  high,val);
       return val;
        
    }
};