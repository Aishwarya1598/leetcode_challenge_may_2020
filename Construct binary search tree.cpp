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
        return bintreeform(preorder,0,preorder.size()-1);
    }
    TreeNode* bintreeform(vector<int>& preorder,int l,int r)
    {
        if(l>r)
            return NULL;
        TreeNode* root=new TreeNode(preorder[l]);
        if(l==r)
            return root;
        int midindx=l+1;
        while(midindx<=r && preorder[midindx]<preorder[l])
            midindx++;
        root->left=bintreeform(preorder,l+1,midindx-1);
        root->right=bintreeform(preorder,midindx,r);
        return root;
        
    }
};
