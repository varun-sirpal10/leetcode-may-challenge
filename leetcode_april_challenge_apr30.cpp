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
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        
        return checkPath(root,arr,0);
    }
    
    bool checkPath(TreeNode* root, vector<int>&arr, int index){
        
        if(root==NULL or index==arr.size()){
            return false;
        }
        
        if(root->left == NULL and root->right == NULL and arr[index] == root->val and index==arr.size()-1){
            return true;
        }
        
        return arr[index]==root->val and (checkPath(root->left,arr,index+1) or checkPath(root->right,arr,index+1));
    }
};