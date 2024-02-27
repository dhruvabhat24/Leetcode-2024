/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
#include<stdio.h>
#include<stdlib.h>


 int max(int a,int b)
{
return a>b?a:b;
}
int ans=0;
int input(struct TreeNode* n)
{
if(n!=NULL)
{
int lefty=input(n->left);
int right=input(n->right);
ans=max(ans,lefty+right);
return max(lefty,right)+1;
}
return 0;
}
int diameterOfBinaryTree(struct TreeNode* root){
ans=0;
input(root);
return ans;
}


