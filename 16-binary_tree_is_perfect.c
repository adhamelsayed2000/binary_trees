#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Check if left and right subtrees have the same height */
	if (left_height == right_height)
	{
		/* If the tree is full and all levels are filled, it's perfect */
		if (binary_tree_is_full(tree))
			return (1);
	}

	return (0);
}
