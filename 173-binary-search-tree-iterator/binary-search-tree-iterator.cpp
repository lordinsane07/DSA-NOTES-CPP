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
class BSTIterator {
public:
vector<int> values;
	int ind=-1;
		BSTIterator(TreeNode* root){
			inorder(root);
			ind=-1;
		}
		void inorder(TreeNode* root){
			if(root==nullptr) return;
			inorder(root->left);
			values.push_back(root->val);
			inorder(root->right);
		}
		bool hasNext(){
			return (ind+1<values.size())?true:false;
		}
		
		int next(){
			return values[++ind];
		}
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */