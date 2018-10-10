#include <stdio.h>
#include <stdlib.h>

struct node { int i; struct node *next;};

void print_list(struct node *head)
{
    /*
     * Given a pointer to the node representing the first node in a linked list,
     * prints all values in the linked list.
     * The linked list must be terminated by a null pointer.
     */
    struct node *cur_node = head;
    printf("{");
    while (cur_node)
    {
        printf("%d, ", cur_node->i);
        cur_node = cur_node->next;
    };
    printf("}");
    return;
}

struct node * insert_front(struct node *target, int i)
{
    /*
     * Given a pointer to the first node of a linked list,
     * insert a new node containing i into the beginning of the list
     *
     * Returns the node inserted (which is also the start of the list).
     */
    struct node *new_node = malloc(sizeof(struct node));
    new_node->i = i;
    new_node->next = target;
    return new_node;
};

struct node * free_list(struct node *head)
{
    /*
     * Frees all memory of a linked list from the node pointed to by the given pointer. 
     * 
     * Returns a null pointer.
     */
    if (head->next)
    {
        free_list(head->next);
    }
    printf("Freeing %p, holding %d\n", head, head->i);
    free(head);
    return 0;
}
