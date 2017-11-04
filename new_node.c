#include "b_trees.h"

t_tree	*new_node(void *content, size_t content_size)
{
	t_tree		*new;

	new = (t_tree *)malloc(sizeof(t_tree));
	new->content = ft_memalloc(content_size);
	ft_memcpy(new->content, content, content_size);
	new->content_size = content_size;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
