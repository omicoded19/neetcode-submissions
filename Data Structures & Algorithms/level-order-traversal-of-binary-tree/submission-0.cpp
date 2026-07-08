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

class Solution{
public:
    vector<vector<int>>levelOrder(TreeNode* root){
        vector<vector<int>>ans;

        if(root==NULL)return ans;

        queue<TreeNode*>q; //BFS ke liye queue
        q.push(root); //root se start

        while(!q.empty()){ //jab tak nodes bache hain
            int s=q.size(); //current level ke nodes count
            vector<int>v; //current level values

            for(int i=0;i<s;i++){ //current level process
                TreeNode* node=q.front(); //front node lo
                q.pop(); //queue se remove karo

                if(node->left!=NULL)q.push(node->left); //next level ke liye left child
                if(node->right!=NULL)q.push(node->right); //next level ke liye right child

                v.push_back(node->val); //current node value store
            }

            ans.push_back(v); //current level answer mein add
        }

        return ans; 
    }
};