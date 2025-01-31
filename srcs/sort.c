/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:11:45 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/31 18:44:54 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	max_bits(t_stack *stk)
{
	t_stack *tmp;
	int		index_max;
	int		bits;

	tmp = stk;
	index_max = tmp->index;
	bits = 0;
	while (tmp)
	{
		if (index_max < tmp->index) 
			index_max = tmp->index;
		tmp = tmp->next;
	}
	while ((index_max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix(t_stack *stk_a, t_stack *stk_b)
{
	int		size;
	int		i;
	int		j;
	int		bits;

	i = 0;
	bits = max_bits(stk_a);
	size = list_len(stk_a);
	while (i < bits)
	{
		j = 0;
		while (j++ < size)
		{
			if (((stk_a->index >> i) & 1) == 1)
				rotate(&stk_a, "ra");
			else
				push(&stk_a, &stk_b, "pb");
		}
		while (list_len(stk_b) != 0)
			push(&stk_b, &stk_a, "pa");
		i++;
	}
}
