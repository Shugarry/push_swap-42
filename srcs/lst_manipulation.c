/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manipulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:09:30 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/28 17:27:54 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_stack	*create_node(int content)
{
	t_stack	*node;

	node = (t_stack *)malloc (sizeof(t_stack));
	if (node == NULL)
		retrun (NULL);
	node->value = content;
	node->index = 0;
	node->next = NULL;
	return (node);
}

t_stack	*create_stk(char **arr, int size)
{
	t_stack	*head;
	t_stack *curr_node;
	t_stack	*tmp;
	int		i;
	int		num;

	i = 0;
	head = create_node((int)atol(arr[i]));
	if (head == NULL)
		return (NULL);
	tmp = head;
	while (i++ < size)
	{
		num = ft_atol(arr[i]);
		if (INT_MAX < num || INT_MIN > num)
			return (free_the_list(head));
		curr_node = create_node(num);
		if (curr_node == NULL)
			return (free_the_list(head));
		tmp->next = curr_node;
		tmp = tmp->next;
	}
	return (head)
}
