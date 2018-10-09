#include <stdio.h>

struct node { int i; struct node *next;};

void print_list(struct node *head)
{
  struct node *cur_node = head;
  while (cur_node)
  {
    printf("%d\n", cur_node->i);
    cur_node = cur_node->next;
  };
  return;
}

//NOTE: this should be in a different file
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
