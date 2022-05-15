#include <stdlib.h>
#include <stdio.h>

#include "data_structure/execution.h"

#define DATA_SIZE 10

LinkedList *create_linked_list()
{

  int data[DATA_SIZE] = {20, 30, 40, 50, 60, 70, 80, 90, 100};
  LinkedList *head = NULL;
  LinkedList *before = NULL;

  for (int i = 0; i < DATA_SIZE - 1; i++)
  {
    LinkedList *node = linked_list_create(data[i]);
    if (before == NULL)
    {
      head = node;
    }
    else
    {
      link_node_to_tail(before, node);
    }
    before = node;
  }

  return head;
}

void print_linked_list(LinkedList *list)
{
  LinkedList *node = list;
  printf("Print Linked List \n");

  while (node != NULL)
  {
    printf("%d ", node->data);
    node = node->tail;
  }

  printf("\n");
}

void create_and_print_linked_list()
{
  LinkedList *list = create_linked_list();
  print_linked_list(list);
}