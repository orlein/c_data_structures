#include <stdlib.h>
#include <stdio.h>

#include "data_structure/execution.h"

void create_and_print_linked_list()
{
  LinkedList *rootHead = create_multiple_linked_list_nodes(20);
  traverse(rootHead);
  printf("find nearest: %d\n", find_nearest(rootHead, 44));
}