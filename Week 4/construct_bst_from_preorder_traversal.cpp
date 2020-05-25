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
    int i = 0;
    TreeNode* bstFromPreorder(vector<int>& pre, int upper=INT_MAX) {        
        if(i >= pre.size() || pre[i] > upper) return NULL;
        return new TreeNode(pre[i++], bstFromPreorder(pre, pre[i-1]), bstFromPreorder(pre, upper));        
    }
};