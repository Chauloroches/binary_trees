#include "binary_trees.h"
/**
 * binary_tree_delete -  Deletes an entire binary tree
 * @tree: Is a pointer to the root node of the tree to delete
 * Return: If tree is NULL, do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
