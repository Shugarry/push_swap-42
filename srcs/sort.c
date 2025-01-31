/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:11:45 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/30 20:18:12 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max_bits(t_stack *stk)
{
	t_stack *tmp;
	int		index_max;
	int		bits_max;

	tmp = stk;
	index_max = tmp->index;
	bits_max = 0;
	while (tmp)
	{
		if (index_max < tmp->index) 
			max = tmp->index;
		tmp = tmp->next;
	}
	while ((index_max >> bits_max) != 0)
		bits_max++;
}

void	radix()
{

}
