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
    bool search(TreeNode* root, int target, string &s){
        if(root==NULL) {
            return false;
        }
        if(root->val==target) {
            return true;
        }
        
        bool find1=search(root->left,target, s+='L');  
        if(find1) return true;
        s.pop_back(); 
        
        bool find2= search(root->right,target, s+='R');
        if(find2) return true;
        s.pop_back(); 
        return false;
    }
  
     TreeNode* lca(TreeNode* root ,int n1 ,int n2)
    {
       if(root==NULL)
       return NULL;
       if(root->val==n1 or root->val==n2)
       return root;
       
       TreeNode* left=lca(root->left,n1,n2);
       TreeNode* right=lca(root->right,n1,n2);
       
       if(left!=NULL && right!=NULL)
       return root;
       if(left)
       return left;
       if(right)
       return right;
       
       return NULL; 
       
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        TreeNode* temp=lca(root,startValue,destValue);
        
        string s1,s2;
        search(temp,startValue,s1);
        search(temp,destValue,s2);
        for(auto &it:s1){
            it='U';
        }
        return s1+s2;
    }
};