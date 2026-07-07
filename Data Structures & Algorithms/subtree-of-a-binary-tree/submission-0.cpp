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
    bool identical(TreeNode* x, TreeNode* y){
        if(x==NULL && y==NULL) return true; // dono null mtlb true
        if(x==NULL || y==NULL) return false; // koi ek null mtlb false as root tree if zero subtree can never be subtree
        return x->val==y->val && identical(x->right,y->right) && identical(x->left,y->left); 
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        if(subRoot==NULL) return true; // sub can be zero
        if(identical(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
