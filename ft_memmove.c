/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 14:00:57 by ccamargo          #+#    #+#             */
/*   Updated: 2022/04/05 23:37:33 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	pdest = dest;
	psrc = src;
	if (psrc < pdest)
	{
		i = 1;
		while (i <= n)
		{
			pdest[n - i] = psrc[n - i];
			i++;
		}
	}
	else
		ft_memcpy(pdest, psrc, n);
	return (dest);
}
