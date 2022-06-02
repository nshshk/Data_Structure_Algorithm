#ifndef _TREE_H_
#define _TREE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _tree_node
{
  int val;
  struct _tree_node * lchild;
  struct _tree_node * rchild;
} tree_node;

tree_node * make_tree_node(int arr[], int size, int start);

void preorder_tree(tree_node * root);
void postorder_tree(tree_node * root);
void inorder_tree(tree_node * root);

#endif
