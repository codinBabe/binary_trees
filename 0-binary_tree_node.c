#include "binary_trees.h"

/**
 * *binary_tree_node - creates a binary tree node
 * @parent: pointer to the root node
 * @value:the value to put in the new node
 * Return:a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->parent = parent;
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;
	}
	return (newNode);
}
