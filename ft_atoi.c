/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:02:35 by ccamargo          #+#    #+#             */
/*   Updated: 2022/04/10 16:48:28 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' \
	|| c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		nbr = (nbr * 10) + nptr[i] - '0';
		i++;
	}
	return (nbr * sign);
}
