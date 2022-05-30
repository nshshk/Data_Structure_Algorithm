#include "doubly_linked_list.h"

doubly_node * doubly_head;

void init_doubly_node(void)
{
    doubly_head = (doubly_node*)malloc(sizeof(doubly_node));

    doubly_head->next = NULL;
}

void deinit_doubly_node(void)
{
    if(doubly_head->next != NULL)
    {
        printf("not empty doubly node!\n");
        return;
    }

    free(doubly_head);
}

void insert_doubly_node(int val)
{
    doubly_node * node = (doubly_node*)malloc(sizeof(doubly_node));

    if(doubly_head->next == NULL)
    {
        node->val = val;
        doubly_head->next = node;
        node->next = NULL;
        node->prev = doubly_head;
        return;
    }

    node->val = val;
    doubly_node * temp_node = doubly_head->next;

    node->next = temp_node;
    temp_node->prev = node;
    doubly_head->next = node;
    node->prev = doubly_head;
}

void insert_doubly_last_node(int val)
{
    doubly_node * temp_node = NULL;

    if(doubly_head->next == NULL)
    {
        insert_doubly_node(val);
        return;
    }

    temp_node = doubly_head->next;

    while(temp_node->next != NULL)
    {
        temp_node = temp_node->next;
    }

    doubly_node * node = (doubly_node*)malloc(sizeof(doubly_node));
    temp_node->next = node;
    node->prev = temp_node;
    node->val = val;
    node->next = NULL;
}

void print_doubly_node(void)
{
    if(doubly_head->next == NULL)
        return;

    doubly_node * node = doubly_head->next;

    while(node->next != NULL)
    {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("%d ", node->val);

    printf("reverse : ");

    while(node->prev != doubly_head)
    {
        printf("%d ", node->val);
        node = node->prev;
    }
    printf("%d ", node->val);
}

void delete_doubly_node(void)
{
  if(doubly_head->next == NULL)
    return;

  doubly_node * node = doubly_head->next;

  while(node->next != NULL)
  {
    doubly_head->next = node->next;
    free(node);
    node = doubly_head->next;
  }

  doubly_head->next = node->next;
  free(node);
}
