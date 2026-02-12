/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

 string serialize(TreeNode* root) {
          queue<TreeNode*> q;
        q.push(root);
        string s="";
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node){
                s.append(to_string(node->val));
                s.append(",");
                q.push(node->left);
                q.push(node->right);
            }
            else{
                s.append("null,");
            }
        }
        return s;
    }

    TreeNode* deserialize(string data) {
           if(data.empty()) return nullptr;
           vector<string> tokens;
           string temp;
           for(char ch:data){
            if(ch==','){
                tokens.push_back(temp);
                temp.clear();
            }
            else{
                temp.push_back(ch);
            }
           }
           if(tokens[0]=="null") return nullptr;
           TreeNode* root=new TreeNode(stoi(tokens[0]));
           queue<TreeNode*> q;
           q.push(root);
           int i=1;
           while(!q.empty() && i<tokens.size()){
            TreeNode* node=q.front();
            q.pop();
            if(tokens[i]!="null" && i<tokens.size()){
                node->left=new TreeNode(stoi(tokens[i]));
                q.push(node->left);
            }
            i++;
            if(tokens[i]!="null" && i<tokens.size()){
                node->right=new TreeNode(stoi(tokens[i]));
                q.push(node->right);
            }
            i++;
           }
           return root;
    }
    // Encodes a tree to a single string.
   
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));