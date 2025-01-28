/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:48:49 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/28 18:23:12 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*bubble_sort(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		while (j < i)
		{

		}
	}
}
void	indexing(t_stack *stk, int *arr)
{
	int	i;

	i = 0;
	while (stk)
		arr[i++] = stk->value;
	arr = bubble_sort(arr, list_len(stk));

}

void	radix_sort(t_stack stk_a, t_stack stk_b)
{
	
}
