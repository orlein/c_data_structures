typedef struct _BinaryTree
{
  struct _BinaryTree *left;
  struct _BinaryTree *right;
  int data;

} BinaryTree;

BinaryTree *tree_root_create(int data);
void link_tree_to_left(BinaryTree *root, BinaryTree *left);
void link_tree_to_right(BinaryTree *root, BinaryTree *right);
void add_data_to_tree_node(BinaryTree *node, int newData);