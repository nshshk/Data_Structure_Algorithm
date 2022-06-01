#include "queue.h"
#include <stdio.h>

queue_node *queue_head, * queue_tail;

void init_queue(void)
{
    queue_head= (queue_node*)malloc(sizeof(queue_node));
    queue_tail = (queue_node*)malloc(sizeof(queue_node));

    queue_tail = NULL;
    queue_head = NULL;
}

void deinit_queue(void)
{
    if(queue_tail != NULL)
    {
        printf("not empty queue node!\n");
        return;
    }

    free(queue_tail);
    free(queue_head);
}

void insert_queue(int val)
{
    queue_node * node = (queue_node*)malloc(sizeof(queue_node));

    if(queue_head == NULL)
    {
        node->val = val;
        node->next = node;
        queue_head = node;
        queue_tail = node;
        return;
    }

    node->val = val;
    queue_tail->next = node;
    queue_tail = node;
}

void delete_queue(void)
{
  if(queue_tail == NULL)
    return;

  queue_node * del_node = queue_head;

  while(del_node != queue_tail)
  {
    queue_head = del_node->next;
    printf("%d ", del_node->val);
    free(del_node);
    del_node = queue_head;
  }

  printf("%d ", del_node->val);
  free(del_node);

  queue_head = NULL;
  queue_tail = NULL;
}
