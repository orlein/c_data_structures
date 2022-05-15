#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

BinaryTree *tree_root_create(int data)
{
  BinaryTree *root = NULL;

  root = malloc(sizeof(BinaryTree));

  root->data = 20;
  root->left = NULL;
  root->right = NULL;
}

void link_tree_to_left(BinaryTree *root, BinaryTree *left)
{
  root->left = left;
}

void link_tree_to_right(BinaryTree *root, BinaryTree *right)
{
  root->right = right;
}

void add_data_to_tree_node(BinaryTree *node, int newData)
{
  BinaryTree *newNode = tree_root_create(newData);
  if (node->data >= newData)
  {
    link_tree_to_left(node, newNode);
  }
  else
  {
    link_tree_to_right(node, newNode);
  }
}