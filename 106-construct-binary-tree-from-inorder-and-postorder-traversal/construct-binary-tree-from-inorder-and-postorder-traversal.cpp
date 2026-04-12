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
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       map<int,int> mpp;
       for(int i=0;i<inorder.size();i++){
        mpp[inorder[i]]=i;
       }
       TreeNode* root=buildTree(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,mpp);
       return root;
    }
    TreeNode* buildTree(vector<int>& postorder,int postart,int poend,vector<int>& inorder,int indstart,int indend, map<int,int>& mpp){
        if(postart>poend || indstart>indend) return nullptr;
        TreeNode* root=new TreeNode(postorder[poend]);
        int indroot=mpp[root->val];
        int numsleft=indroot-indstart;
        root->left=buildTree(postorder,postart,postart+numsleft-1,inorder,indstart,indroot-1,mpp);
        root->right=buildTree(postorder,postart+numsleft,poend-1,inorder,indroot+1,indend,mpp);
        return root;
    }
  
};