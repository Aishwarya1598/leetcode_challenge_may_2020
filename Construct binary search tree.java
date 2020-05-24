/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode Constructbst(TreeNode root,int data)
    {
        if(root==null)
        {
            root=new TreeNode(data);
            return root;
        }
        else if(root.val>data)
        {
            root.left=Constructbst(root.left,data);
        }
        else
        {
            root.right=Constructbst(root.right,data);
        }
        return root;
    }
    public TreeNode bstFromPreorder(int[] preorder) {
        int n=preorder.length;
        if(n==0)
            return null;
        TreeNode root=new TreeNode(preorder[0]);
        for(int i=1;i<n;i++)
        {
            root=Constructbst(root,preorder[i]);
        }
        return root;
    }
}
