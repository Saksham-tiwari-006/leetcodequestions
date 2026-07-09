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
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        height(root,d);
        return d;
    }
    private:
    int height(TreeNode* Node , int &d){
        if(Node==NULL) return 0;
        int lh=height(Node->left,d);
        int rh=height(Node->right,d);
        
        d=max(d,lh+rh);
        return 1+max(lh,rh);
        }
};