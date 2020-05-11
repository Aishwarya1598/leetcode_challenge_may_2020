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
    bool isCousins(TreeNode* root, int x, int y) {
       if(root==NULL)
       {
           return false;
       }
        int prnt=-1;
        queue<pair<TreeNode*,int>> t;
        t.push(make_pair(root, 0)); 
        while(!t.empty())
        {  int s = t.size();
        for (int i=0;i<s;i++)
        {
            int res = t.front().second;
            TreeNode* n = t.front().first;
            if(n->val==y || n->val==x)
            {
                if(prnt!=-1)
                {
                    if(prnt!=res)
                        return true;
                    else
                        return false;
                }
                prnt=res;
            }
            t.pop();
            if(n->right)
            {
                t.push(make_pair(n->right, n->val));
            }
            if(n->left)
            {
                t.push(make_pair(n->left,n->val));
            }
        }
        if(prnt!=-1)
            return false;
    }
    return false;
    }
};

/* Description */
Here in the above program we have used a queue which stores pair of that particular node and its data. We are here performing level order traversal,
in which we traverse through each level and check if both the nodes of given data are at same level or not. If they are at same level we check if the parent
of the nodes is same or not. So for this here we are considering a queue pair and for each iteration of the queue we insert the node and its value at 
that paricular level and check if they match the values of the given data. iteratively we insert the values at each level of tree and check if the
given data are at same level and with different parent and we return true, if not we return false;
