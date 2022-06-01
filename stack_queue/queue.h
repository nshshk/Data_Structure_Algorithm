#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct _queue_node
{
    int val;
    struct _node *next;
} queue_node;

void init_queue(void);
void deinit_queue(void);
void delete_queue(void);
void insert_queue(int val);

#endif

