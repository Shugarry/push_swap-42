/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frey-gal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:56:58 by frey-gal          #+#    #+#             */
/*   Updated: 2025/01/22 18:58:50 by frey-gal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

int	ft_atol(const char *nptr)
{
	long	n;
	long	flag;

	flag = 0;
	n = 0;
	while ((*nptr <= 13 && *nptr >= 9) || *nptr == 32)
		nptr++;
	if (ft_strncmp(nptr, "-2147483648", 11) == 0)
		return (-2147483648);
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		nptr++;
		flag++;
	}
	while (ft_isdigit(*nptr))
	{
		n *= 10;
		n = n + (*nptr++ - '0');
	}
	if (flag)
		n = -n;
	return (n);
}
