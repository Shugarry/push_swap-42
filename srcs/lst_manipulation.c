/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manipulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:09:30 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/31 18:18:54 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	list_len(t_stack *stk)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = stk;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return i;
}

void	print_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("i = %d, num = %d\n", i, arr[i]);
		i++;
	}
}

void	print_list(t_stack *stk)
{
	t_stack *tmp;
	int		i;

	tmp = stk;
	i = 0;
	while (tmp)
	{
		ft_printf("N: %d | V: %d | I: %d \n", i++, tmp->value, tmp->index);
		tmp = tmp->next;
	}
}

t_stack	*create_node(int content)
{
	t_stack	*node;

	node = (t_stack *)malloc (sizeof(t_stack));
	if (node == NULL)
		return (NULL);
	node->value = content;
	node->index = 0;
	node->next = NULL;
	return (node);
}

t_stack	*create_stk(char **arr)
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
	while (arr[++i])
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
	return (head);
}
