#include "single_linked_list.h"
#include "doubly_linked_list.h"
#include "circular_linked_list.h"

int main(void)
{
    /* single start */
    printf("single node : ");
    init_single_node();

    insert_single_node(3);
    insert_single_node(7);
    insert_single_node(9);

    insert_single_last_node(20);
    insert_single_last_node(10);

    print_single_node();

    delete_single_node();

    deinit_single_node();
    printf("\n");
    /*single end*/

    /* doubly start */
    printf("doubly node : ");
    init_doubly_node();

    insert_doubly_node(3);
    insert_doubly_node(7);
    insert_doubly_node(9);

    insert_doubly_last_node(20);
    insert_doubly_last_node(10);

    print_doubly_node();

    delete_doubly_node();
    deinit_doubly_node();
    printf("\n");
    /*doubly end*/

    /* circular start */
    printf("circular node : ");
    init_circular_node();

    insert_circular_node(3);
    insert_circular_node(7);
    insert_circular_node(9);
    insert_circular_tail_node(20);
    insert_circular_tail_node(10);

    print_circular_node();
    delete_circular_node();
    deinit_circular_node();
    /*circular end*/
    return 0;
}
