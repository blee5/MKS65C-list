#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->i = 42; head->next = 0;

    printf("\nAfter inserting -255 to beginning:\n");
    head = insert_front(head, -255);
    print_list(head);

    printf("\nAfter inserting 300 to beginning:\n");
    head = insert_front(head, 300);
    print_list(head);

    printf("\nAfter inserting 65535 to begining:\n");
    head = insert_front(head, 65535);
    print_list(head);

    printf("\nFreeing list:\n");
    struct node *a = free_list(head);
    printf("free_list returned: %p\n", a);

    return 0;
}
