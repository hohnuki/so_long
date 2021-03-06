#include "../includes/so_long.h"

void	list_to_array(t_info *info)
{
	t_list	*node;
	int		i;

	node = info->map_info.guard_node;
	node = node->next;
	i = 0;
	info->map_info.map = malloc(sizeof(char *) * info->map_info.height);
	if (info->map_info.map == NULL)
		exit (EXIT_FAILURE);
	while (i < info->map_info.height)
	{
		info->map_info.map[i] = node->content;
		node = node->next;
		i++;
	}
}
