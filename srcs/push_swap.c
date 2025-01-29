/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:09:07 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/30 00:48:13 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Verifies the string input syntax and at the same time counts amount of 
// numbers in the stack.
static int	fed_inspection(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((!ft_isdigit(s[i]) && s[i] != 32) ||
			(s[i] == 32 && s[i + 1] == 32) || (i == 0 && s[i] == 32))
			return (0);
		i++;

	}
	return (i);
}

// Calls fed_inspection() to verify the argument for push_swap and count amount
// of bytes to be allocated to create stk_a.
static t_stack	*stack_it_up(char *s)
{
	t_stack	*tmp_stk;
	char	**arr;
	int		size;
	
	size = fed_inspection(s);
	if (size == 0)
		return (NULL);
	arr = ft_split(s, ' ');
	if (arr == NULL)
		mis_input(NULL, NULL, arr, 1);
	tmp_stk = create_stk(arr, size);
	if (tmp_stk == NULL)
		mis_input(tmp_stk, NULL, arr, 1);
	split_free(arr);
	return (tmp_stk);
}

static void	sort(t_stack *stk_a, t_stack *stk_b)
{
	int stk_size;
	int	*arr;

	stk_size = list_len(stk_a);
	arr = (int *)malloc(stk_size * sizeof(int));
	if (!arr)
		mis_input(stk_a, stk_b, NULL, 1);
	indexing(&stk_a, arr);
//	if (stk_size > 5)
//	if (stk_size < 5)
}

int main(int ac, char **av)
{
	t_stack	*stk_a;
	t_stack	*stk_b;

	stk_a = NULL;
	stk_b = NULL;
	if (ac != 2 || av[1] == NULL)
	{
		ft_printf("%s", av[1]);
		return (1);
	}
	stk_a = stack_it_up(av[1]);
	if (!stk_a)
		mis_input(stk_a, NULL, NULL, 1);
	sort(stk_a, stk_b);
}
