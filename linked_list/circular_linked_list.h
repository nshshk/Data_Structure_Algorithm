#ifndef _CIRCULAR_LINKED_LIST_H_
#define _CIRCULAR_LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _circular_node
{
    int val;
    struct _node *next;
} circular_node;

void init_circular_node(void);
void deinit_circular_node(void);
void insert_circular_node(int val);
void print_circular_node(void);
void delete_circular_node(void);
void insert_circular_tail_node(int val);

#endif

