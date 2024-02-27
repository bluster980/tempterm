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
    void rightlength(TreeNode* root, int &pos){
        if(root == NULL) return;
        pos++;
        rightlength(root->right, pos);
    }
    void leftlength(TreeNode* root, int &neg){
        if(root == NULL) return;
        neg--;
        leftlength(root->left, neg);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int pos = 0, neg = 0;
        rightlength(root->right, pos);
        leftlength(root->left, neg);
        return pos-neg;
    }
};