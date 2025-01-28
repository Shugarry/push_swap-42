/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:09:07 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/28 18:23:08 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	list_len(t_stack *stk)
{
	int		i;
	t_stack	*tmp

	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return i;
}

// Verifies the string input syntax and at the same time counts amount of 
// numbers in the stack.
int	fed_inspection(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((!ft_isdigit(s[i]) && s[i] != 32) ||
			(s[i] == 32 && s[i + 1] == 32) || (i == 0 && s[i] == 32))
			return (0);
		if (s[i] && s[i] != 32)
			size++;
		i++;

	}
	return (i);
}

// Calls fed_inspection() to verify the argument for push_swap and count amount
// of bytes to be allocated to create stk_a.
t_stack	*stack_it_up(char *s)
{
	t_stack	*tmp_stk;
	char	**tmp_arr;
	int		i;
	
	i = 0;
	size = fed_inspection(s);
	if (size == 0)
		return (NULL);
	arr == ft_split(s, ' ');
	if (ft_split == NULL)
		mis_input(NULL, NULL, arr, 1);
	tmp_stk = create_stk(arr, size);
	if (tmp_stk == NULL)
		mis_input(tmp_stk, NULL, arr, 1);
	split_free(arr);
	return (tmp_stk);
}

void	sort(t_stack *stk_a, t_stack *stk_b)
{
	int stk_size;
	int	*arr;

	stk_size = list_len;
	arr = (int *)malloc(stk_size * sizeof(int));
	if (!arr)
		mis_input(stk_a, stk b, NULL);
	index
	if (stk_size > 5)
		radix_sort(stk_a, stk_b);
	if (stk_size < 5)
		small_sort(stk_a, stk_b);
}

int main(int ac, char **av)
{
	t_stack	*stk_a;
	t_stack	*stk_b;

	stk_a = NULL;
	stk_b = NULL;
	if (ac != 2 || av[1] == NULL || av[1] == "")
		return (av);
	stk_a = stack_it_up(av[1]);
	if (!stk_a)
		mis_input(stk_a, NULL, NULL, 1);

}
