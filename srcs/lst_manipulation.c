/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manipulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:09:30 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/22 20:16:59 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_stack	*create_node(int content)
{
	t_stack	*head;

	head = (t_stack *)malloc(sizeof(t_stack));
	if (head == NULL)
		return (NULL);
	head->value = content;
	head->next = NULL;
	return (head);
}

void	*add_next(t_stack **lst, int content)
{
	t_stack	*tmp;
	t_stack new;

	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new = create_node(content);
	if (new == NULL)
		return (NULL);
	if (*lst == NULL)
		*lst = new;
	else
	tmp->next = new;
	new->next = NULL;
}

t_stack *create_stk(int size)
{
	t_stack	*stk;
	int		i;

	i = 0;
	while (i < size)
	{
		malloc 
	}
}
