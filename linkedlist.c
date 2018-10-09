#include <stdio.h>

struct node { int i; struct node *next;};

void print_list(struct node *head)
{
  /*
   * Prints all values in a linked list
   * The pointer to the next node of the last node must be a null pointer,
   * or else it will probably do unexpected things
   */
  struct node *cur_node = head;
  while (cur_node)
  {
    printf("%d\n", cur_node->i);
    cur_node = cur_node->next;
  };
  return;
}

int main()
{
  struct node a;
  struct node b;
  struct node c;
  a.i = 42;
  a.next = &b;
  b.i = 300;
  b.next = &c;
  c.i = 65535;
  c.next = 0;
  print_list(&a);
  return 0;
}
