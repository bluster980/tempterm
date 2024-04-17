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
    string smallestFromLeaf(TreeNode* r) {
  if (r == nullptr) 
      return "|";
  auto s = string(1, 'a' + r->val);
  return r->left == r->right ? s : min(smallestFromLeaf(r->left) + s, smallestFromLeaf(r->right) + s);
}
};