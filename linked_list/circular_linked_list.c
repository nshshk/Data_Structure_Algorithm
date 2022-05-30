#include "circular_linked_list.h"

circular_node * circular_tail;

void init_circular_node(void)
{
    circular_tail = (circular_node*)malloc(sizeof(circular_node));

    circular_tail = NULL;
}

void deinit_circular_node(void)
{
    if(circular_tail != NULL)
    {
        printf("not empty circular node!\n");
        return;
    }

    free(circular_tail);
}

void insert_circular_node(int val)
{
    circular_node * node = (circular_node*)malloc(sizeof(circular_node));

    if(circular_tail == NULL)
    {
        node->val = val;
        node->next = node;
        circular_tail = node;
    }
    node->val = val;
    node->next = circular_tail->next;
    circular_tail->next = node;
}

void insert_circular_tail_node(int val)
{
    if(circular_tail == NULL)
    {
        insert_circular_node(val);
        return;
    }

    circular_node * node = (circular_node*)malloc(sizeof(circular_node));

    node->val = val;
    node->next = circular_tail->next;
    circular_tail->next = node;
}

void print_circular_node(void)
{
    if(circular_tail == NULL)
        return;

    circular_node * node = circular_tail->next;

    while(node != circular_tail)
    {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("%d ", node->val);
}

void delete_circular_node(void)
{
  if(circular_tail == NULL)
    return;

  circular_node * node = circular_tail->next;

  while(node != circular_tail)
  {
    circular_tail->next = node->next;
    free(node);
    node = circular_tail->next;
  }

  circular_tail->next = node->next;
  free(node);

  circular_tail = NULL;
}
