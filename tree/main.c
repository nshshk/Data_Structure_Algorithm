#include "tree.h"

int main(void)
{
  int arr[10] = {6, 4, 5, 8, 1, 2, 9, 7, 3, 10};

  tree_node * node = make_tree_node(arr, sizeof(arr)/sizeof(int), 0);

  printf("preorder : ");
  preorder_tree(node);
  printf("\n");
  printf("postorder : ");
  postorder_tree(node);
  printf("\n");
  printf("inorder : ");
  inorder_tree(node);

  return 0;
}
