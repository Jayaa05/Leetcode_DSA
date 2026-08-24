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
int binaryToDecimal(string s) {
    int decimal = 0;

    for (char c : s) {
        decimal = decimal * 2 + (c - '0');
    }

    return decimal;
}
int sumofl(TreeNode* root,string str){
    if(root==NULL) return 0;
    str+=to_string(root->val);
    if(root->left== NULL && root->right==NULL) return binaryToDecimal(str);
    return sumofl(root->left,str)+sumofl(root->right,str);
    
}
    int sumRootToLeaf(TreeNode* root) {
          return sumofl(root,"");
        //return tsum;
    }
};