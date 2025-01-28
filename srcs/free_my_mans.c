/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_my_mans.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <frey-gal@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 18:28:21 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/28 18:23:18 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*free_the_list(t_stack *lst)
{
	t_stack	*tmp;

	while (lst != NULL)
	{
		tmp = lst;
		lst = lst->next;
		free(tmp)
	}
	return (NULL);
}

void	*split_free(char **arr)
{
	int	i;

	i = 0;
	if (!arr)
		return (0);
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL;
		i++;
	}
	free(arr);
	return (NULL);
}

//function that safely frees
void	mis_input(t_stack *stk_a, t_stack *stk_b, char **arr, int status)
{
	if (stk_a)
		free_the_list(stk_a);
	if (stk_b)
		free_the_list(stk_b);
	if (arr)
		split_free(arr);:w
	ft_printf("Error\n");
	exit(status);
}
