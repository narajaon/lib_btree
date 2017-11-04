#include "b_trees.h"

void	iter_node_infix(t_tree *tree, void (*fun)())
{
	if (tree != NULL)
	{
		iter_node_infix(tree->left, fun);
		fun(tree);
		iter_node_infix(tree->right, fun);
	}
}
