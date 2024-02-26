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

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
        //if the two trees are null-> return true
    if(!p && !q)
        return true;
    
    //if one of them is null-> return false
    else if( (!p && q) || (p && !q))
        return false;
    
    //base case: if the value of each pointer aren't the same-> return false
    if(p->val != q->val)
        return false;
    
    //return if the two right values are equals && the two left ones are the same
    return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
}
