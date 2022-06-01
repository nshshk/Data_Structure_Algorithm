#include "stack.h"
#include "queue.h"

extern stack_node * stack_head;

int main(void)
{
  /* stack start */
    printf("stack : ");
    init_stack();

    push(3);
    push(7);
    push(9);
    push(20);
    push(10);

    pop(stack_head);

    deinit_stack();
    printf("\n");
  /* stack end */


  /* queue start */
    printf("queue : ");
    init_queue();

    insert_queue(3);
    insert_queue(7);
    insert_queue(9);
    insert_queue(20);
    insert_queue(10);

    delete_queue();
  /* queue end */
    return 0;
}
