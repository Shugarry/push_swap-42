/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:48:49 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/28 23:41:51 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*bubble_sort(int *arr, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	return (arr)
}

int	find_index(int value, int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (value == arr[i])

		i++;
	}
}

void	indexing(t_stack *stk, int *arr)
{
	int		len;
	t_stack *current;

	len = list_len(stk);
	current = stk;
	while (current)
	{
		arr[i++] = current->value;
		current = current->next;
	}
	arr = bubble_sort(arr, len);
	if (!check_doubles(arr))
	{
		free(arr);
		mis_input(stk_a, NULL, NULL);
	}
	current = stk;
	while (current)
	{
		current->index = find_index(stk->value, arr, len);
		current = current->next;
	}

}

void	radix_sort(t_stack stk_a, t_stack stk_b)
{
	
}
