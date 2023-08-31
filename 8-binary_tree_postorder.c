#include "binary_trees.h"

/**
 *binary_tree_postorder - function that goes through a binary tree
 *using post-order traversal
 *@tree: pointer to root node
 *@func: pointer to function to call each node
 *Return: nothing if tree and function is NULL and the data in func
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
