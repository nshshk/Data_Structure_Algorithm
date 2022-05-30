#ifndef _DOUBLY_LINKED_LIST_H_
#define _DOUBLY_LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _doubly_node
{
    int val;
    struct _node *next;
    struct _node *prev;
} doubly_node;

void init_doubly_node(void);
void deinit_doubly_node(void);
void insert_doubly_node(int val);
void print_doubly_node(void);
void delete_doubly_node(void);
void insert_doubly_last_node(int val);

#endif
