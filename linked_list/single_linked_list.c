#include "single_linked_list.h"

single_node * single_head;

void init_single_node(void)
{
    single_head = (single_node*)malloc(sizeof(single_node));

    single_head->next = NULL;
}

void deinit_single_node(void)
{
    if(single_head->next != NULL)
    {
        printf("not empty single node!\n");
        return;
    }

    free(single_head);
}

void insert_single_node(int val)
{
    single_node * node = (single_node*)malloc(sizeof(single_node));

    node->val = val;
    node->next = single_head->next;
    single_head->next = node;
}

void insert_single_last_node(int val)
{
    single_node * temp_node = NULL;

    if(single_head->next == NULL)
    {
        insert_single_node(val);
        return;
    }

    temp_node = single_head->next;

    while(temp_node->next != NULL)
    {
        temp_node = temp_node->next;
    }

    single_node * node = (single_node*)malloc(sizeof(single_node));
    temp_node->next = node;
    node->val = val;
    node->next = NULL;
}

void print_single_node(void)
{
    if(single_head->next == NULL)
        return;

    single_node * node = single_head->next;

    while(node->next != NULL)
    {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("%d ", node->val);
}

void delete_single_node(void)
{
  if(single_head->next == NULL)
    return;

  single_node * node = single_head->next;

  while(node->next != NULL)
  {
    single_head->next = node->next;
    free(node);
    node = single_head->next;
  }

  single_head->next = node->next;
  free(node);
}
