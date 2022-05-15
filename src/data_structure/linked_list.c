#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <limits.h>
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

LinkedList *create_multiple_linked_list_nodes(int dataSize)
{
  LinkedList *head = NULL;
  LinkedList *before = NULL;
  srand(time(NULL));

  for (int i = 0; i < dataSize; i++)
  {
    LinkedList *node = linked_list_create(rand() % 100);
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

int find_nearest(LinkedList *list, int target)
{
  LinkedList *traverseHead = NULL;
  traverseHead = list;

  int currentScore = INT_MAX;
  int currentData = 0;

  while (traverseHead->tail != NULL)
  {
    if (abs(traverseHead->data - target) < currentScore)
    {
      currentScore = abs(traverseHead->data - target);
      currentData = traverseHead->data;
    }

    traverseHead = traverseHead->tail;
  }

  return currentData;
}

void traverse(LinkedList *list)
{
  LinkedList *current = list;
  printf("traverse linked list: \n");
  while (current != NULL)
  {
    printf("%d ", current->data);
    current = current->tail;
  }
  printf("\n");
}