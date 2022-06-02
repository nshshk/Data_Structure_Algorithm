#include "tree.h"

tree_node * make_tree_node(int arr[], int size, int start)
{
  tree_node * node = (tree_node*)malloc(sizeof(tree_node));
  node->val = arr[start];
  node->lchild = node->rchild = NULL;
  int left = 2 * start + 1;
  int right = 2 * start + 2;
  if(left < size)
  {
    node->lchild = make_tree_node(arr, size, left);
  }

  if(right < size)
  {
    node->rchild = make_tree_node(arr, size, right);
  }

  return node;
}

void preorder_tree(tree_node * root)
{
    if(root)
    {
        printf("%d ", root->val);
        preorder_tree(root->lchild);
        preorder_tree(root->rchild);
    }
}

void postorder_tree(tree_node * root)
{
    if(root)
    {
        postorder_tree(root->lchild);
        postorder_tree(root->rchild);
        printf("%d ", root->val);
    }
}

void inorder_tree(tree_node * root)
{
    if(root)
    {
        inorder_tree(root->lchild);
        printf("%d ", root->val);
        inorder_tree(root->rchild);
    }
}

