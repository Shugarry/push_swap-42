/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:03:56 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/29 19:44:52 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "libft/ft_printf.h"
# include "libft/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	int		value;
	int		index;
	struct	s_stack *next;
}	t_stack;

int		ft_atol(const char *nptr);
int		list_len(t_stack *stk);
t_stack	*create_node(int content);
t_stack	*create_stk(char **arr, int size);
void	*free_the_list(t_stack *lst);
void	split_free(char **arr);
void	mis_input(t_stack *stk_a, t_stack *stk_b, char **arr, int status);
void	indexing(t_stack **stk, int *arr);
#endif
