#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main()
{
    struct node *list = 0;
    printf("Printing null list\n");
    print_list(list);

    list = malloc(sizeof(struct node));
    list->i = 42; list->next = 0;
    printf("\nNew linked list:\n");
    print_list(list);

    printf("\nAfter inserting -255 to beginning:\n");
    list = insert_front(list, -255);
    print_list(list);

    printf("\nAfter inserting 300 to beginning:\n");
    list = insert_front(list, 300);
    print_list(list);

    printf("\nAfter inserting 65535 to begining:\n");
    list = insert_front(list, 65535);
    print_list(list);

    printf("\nFreeing list:\n");
    list = free_list(list);
    
    printf("\nPrinting freed list\n");
    print_list(list);

    return 0;
}
