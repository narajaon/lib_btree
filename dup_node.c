#include "b_trees.h"

t_tree	*dup_node(t_tree *node)
{
	t_tree		*dup;

	dup = (t_tree *)malloc(sizeof(t_tree));
	dup->content = ft_memalloc(node->content_size);
	ft_memcpy(dup->content, node->content, node->content_size);
	dup->content_size = node->content_size;
	dup->left = NULL;
	dup->right = NULL;
	return (dup);
}
