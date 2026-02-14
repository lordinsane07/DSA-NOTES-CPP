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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
     if(preorder.size()==0) return nullptr;
        TreeNode* root=new TreeNode(preorder[0]);
        vector<int> leftsub;
        vector<int> rightsub;
        for(int i=1;i<preorder.size();i++){
            if(preorder[0]<preorder[i]) rightsub.push_back(preorder[i]);
            else if(preorder[0]>preorder[i]) leftsub.push_back(preorder[i]);
        }
       root->left=bstFromPreorder(leftsub);
        root->right=bstFromPreorder(rightsub);
        return root;
    }
};