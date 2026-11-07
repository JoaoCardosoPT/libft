unsigned int ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	t_list *tmp;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
