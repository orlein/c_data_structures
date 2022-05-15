typedef struct _LinkedList
{
  struct _LinkedList *head;

  int data;
  int size;

  struct _LinkedList *tail;
} LinkedList;

LinkedList *linked_list_create(int data);
void link_node_to_tail(LinkedList *node, LinkedList *target);
LinkedList *create_multiple_linked_list_nodes(int dataSize);
int find_nearest(LinkedList *list, int target);
void traverse(LinkedList *list);