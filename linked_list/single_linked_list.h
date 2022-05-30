#ifndef _SINGLE_LINKED_LIST_H_
#define _SINGLE_LINKED_LIST_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    int val;
    struct _node *next;
} single_node;

void init_single_node(void);
void deinit_single_node(void);
void insert_single_node(int val);
void print_single_node(void);
void delete_single_node(void);
void insert_single_last_node(int val);

#endif

