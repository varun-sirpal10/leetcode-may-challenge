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
    int levelx=0,levely = 0;
    int parentx=0,parenty=0;
    
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL) return false;
        
        helper(root,NULL,0,x,y);
        if(levelx != levely or parentx == parenty){
            return false;
        }
        return true;
    }
    
    void helper(TreeNode* root, TreeNode* ptr, int level, int x, int y){
        if(root == NULL){
            return;
        }
        
        helper(root->left,root,level+1,x,y);
        
        if(root->val == x and ptr != NULL){
            levelx = level;
            parentx = ptr->val;
        }
        if(root->val == y and ptr != NULL){
            levely = level;
            parenty = ptr->val;
        }
        helper(root->right,root,level+1,x,y);
    }
};