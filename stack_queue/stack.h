#ifndef _STACK_H_
#define _STACK_H_

typedef struct _stack_node
{
  int val;
  struct _stack_node * next;
} stack_node;

void init_stack(void);
void deinit_stack(void);
void push(int val);
void pop(stack_node * head);

#endif
