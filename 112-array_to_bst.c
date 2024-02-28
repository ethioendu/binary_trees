#include "binary_trees.h"

/**
 * array_to_bst - a function that builds a Binary Search Tree from an array
 *
 * @array: a pointer to the first element of the array to be converted.
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of the created BST, or NULL on failure.
 */
#include "binary_trees.h"

/**
 * array_to_avl - turns an array to a avl tree
 * @array: array to turns to AVL tree
 * @size: size of array
 * Return: AVL tree from array
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t i, j = 0;
	avl_t *root;

	root = NULL;
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (avl_insert(&root, array[i]) == NULL)
			{
				return (NULL);
			}
		}
	}
	return (root);
}
