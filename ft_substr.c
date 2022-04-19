/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:44:34 by ccamargo          #+#    #+#             */
/*   Updated: 2022/04/09 11:55:51 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*substr;

	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (slen - start >= len)
		substr = (char *) malloc((len + 1) * sizeof(char));
	else
		substr = (char *) malloc((slen - start + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
