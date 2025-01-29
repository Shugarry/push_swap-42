/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movers.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:22:33 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/30 00:47:26 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap(t_stack **stk)
{
    if (!*stk || !(*stk)->next)
        return;

    t_stack *A;
    t_stack *B;

	A = *stk;
	B = A->next;
    A->next = B->next;
    B->next = A;
    *stk = B;
}

void push(t_stack **stk_from, t_stack **stk_to)
{
	t_stack	*tmp;

	tmp = *stk_from;
	*stk_from = tmp->next;
	tmp->next = *stk_to;
	*stk_to = tmp;
}

void rotate(t_stack **stk)
{
    if (list_len(*stk) <= 1)
        return;

    t_stack *first;
    t_stack *last;

	first = *stk;
	last = *stk;
    while (last->next != NULL)
        last = last->next;

    *stk = first->next;
    last->next = first;
    first->next = NULL;
}
