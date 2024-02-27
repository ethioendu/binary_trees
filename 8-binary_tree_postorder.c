#include "binary_trees.h"

/**
 * binary_tree_postorder - a function that goes through a binary tree
 *	using post-order traversal
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *	If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;/* Do nothing if tree or func is NULL */
	}

	/* Traverse the left subtree */

	binary_tree_postorder(tree->left, func);

	/* Traverse the right subtree */

	binary_tree_postorder(tree->right, func);

	/* Call the function for the current node */

	(*func)(tree->n);
}
