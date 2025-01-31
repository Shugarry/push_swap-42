/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:09:07 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/31 20:17:11 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// Verifies the string input syntax and at the same time counts amount of 
// numbers in the stack.
static int	fed_inspection(char *s)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len - 1)
	{
		if ((!ft_isdigit(s[i]) && s[i] != 32) ||
			(s[i] == 32 && s[i + 1] == 32) || (i == 0 && s[i] == 32))
			return (0);
		i++;

	}
	return (1);
}

// Calls fed_inspection() to verify the argument for push_swap and count amount
// of bytes to be allocated to create stk_a.
static t_stack	*stack_it_up(char *s)
{
	t_stack	*tmp_stk;
	char	**arr;
	
	if (fed_inspection(s) == 0)
		return (NULL);
	arr = ft_split(s, ' ');
	if (arr == NULL)
		mis_input(NULL, NULL, arr, 1);
	tmp_stk = create_stk(arr);
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
	free(arr);
	if (stk_size > 5)
		radix(stk_a, stk_b);
//	if (stk_size < 5)
}

char *join_free(char *s1, char *s2)
{
    char *tmp;
    size_t len;
    size_t i;
    char *ptr_s1;

    i = 0;
    ptr_s1 = s1;
    if (!s1 && !s2)
        return (NULL);
    len = 0;
    if (s1)
        len += ft_strlen(s1);
    if (s2)
        len += ft_strlen(s2);
    tmp = (char *)malloc((len + 1) * sizeof(char));
    if (tmp == NULL)
    {
        if (ptr_s1)
            free(ptr_s1);
        return (NULL);
    }
    if (s1)
        while (*s1)
            tmp[i++] = *s1++;
    if (s2)
        while (*s2)
            tmp[i++] = *s2++;
    tmp[i] = '\0';
    if (ptr_s1)
        free(ptr_s1);
    return (tmp);
}

static char	*cringe_input(char **av, int ac)
{
	int		i;
	char	*str;

	i = 1;
	str = join_free(NULL, av[i]);
	while (i < ac)
	{
		str = join_free(str, " ");
		str = join_free(str, av[i]);
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	t_stack	*stk_a;
	t_stack	*stk_b;
	char	*str;

	stk_b = NULL;
	if (ac < 2 || av[1] == NULL)
	{
		ft_printf("%s", av[0]);
		return (1);
	}
	else if (ac == 2)
		str = av[1];
	else
		str = cringe_input(av, ac);
	stk_a = stack_it_up(str);
	if (ac > 2)
		free(str);
	if (!stk_a)
		mis_input(stk_a, NULL, NULL, 1);
	sort(stk_a, stk_b);
	mis_input(stk_a, stk_b, NULL, 0);
}
