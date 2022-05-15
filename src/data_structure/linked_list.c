#include <stdlib.h>
#include "linked_list.h"

LinkedList *linked_list_create(int data)
{
  LinkedList *list = NULL;

  list = malloc(sizeof(LinkedList));

  list->head = NULL;
  list->tail = NULL;
  list->data = data;
  list->size = sizeof(data);

  return list;
}

void link_node_to_tail(LinkedList *node, LinkedList *target)
{
  node->tail = target;
  target->head = node;
}