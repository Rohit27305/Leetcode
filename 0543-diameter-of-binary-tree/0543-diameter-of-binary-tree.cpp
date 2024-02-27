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
    int height(TreeNode *root){
        if(root == nullptr){
            return 0;
        }
        return 1 + max(height(root->left) , height(root->right));
    }

    void inorder(TreeNode *root , int &ans){
        if(root == nullptr){
            return;
        }
        inorder(root->left , ans);
        int d1 = height(root->left);
        int d2 = height(root->right);
        ans = max(ans , d1+d2);
        inorder(root->right , ans);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        inorder(root , ans);
        return ans;
    }
};