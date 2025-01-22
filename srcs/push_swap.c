/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:09:07 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/22 20:17:03 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str, char c)
{
	int	i;

	i = 0;
	if (!str || !*str)
		return (0);
	if (c == '\0')
	{
		while (str[i])
			i++;
		return (i);
	}
	else
	{
		while (str[i] != c && str[i])
			i++;
		return (i);
	}
}

// function to free() with a safe check, for multiple variables, and a NULL
// return to save space.
char	*free_chungus(char **a, char **b)
{
	if (a && *a)
	{
		free(*a);
		*a = NULL
	}
	if (b && *b)
	{
		free(*b);
		*b = NULL
	}
	return (NULL);
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

int	*stk_init(char **arr, int size)
{
	int		i;
	t_stack	*tmp_stk;

	i = 0;
	while(i < size)
	{
		add_next(&tmp_stk, atol(arr[i]));
		if (tmp_stk->value > (long)INT_MAX)
		{
			return (NULL)
		}
		i++;
	}
	tmp_stk[i] = NULL;

}

// Calls fed_inspection() to verify the argument for push_swap and count amount
// of bytes to be allocated to create stk_a.
int	*stack_it_up(char *s)
{
	t_stack	*tmp_stk;
	char	**tmp_arr;
	int		i;
	
	i = 0;
	if (size == 0)
		return (NULL);
	tmp_arr == ft_split(s, 32);
	if (ft_split == NULL)
		return (NULL);
	tmp_stk = list_init(tmp_arr, fed_inspection(s));
	if (tmp_stk == NULL)
		return (NULL);
	
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
}
