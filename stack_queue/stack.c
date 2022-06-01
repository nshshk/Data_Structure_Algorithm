#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

stack_node * stack_head;

void init_stack(void)
{
    stack_head = (stack_node*)malloc(sizeof(stack_node));
    stack_head->next = NULL;
}

void deinit_stack(void)
{
    if(stack_head->next != NULL)
    {
        printf("Not Empty stack");
        return;
    }
    free(stack_head);
}

void push(int val)
{
    stack_node * node = (stack_node*)malloc(sizeof(stack_node));

    node->val = val;
    node->next = stack_head->next;
    stack_head->next = node;
}

void pop(stack_node * _head)
{
    stack_node * del_node = stack_head->next;

    while(del_node->next != NULL)
    {
        printf("%d ", del_node->val);
        stack_head->next = del_node->next;
        free(del_node);
        del_node = stack_head->next;
    }
    printf("%d ", del_node->val);
    free(del_node);

    stack_head->next = NULL;
}
