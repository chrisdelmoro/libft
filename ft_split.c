/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamargo <ccamargo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:58:29 by ccamargo          #+#    #+#             */
/*   Updated: 2022/04/21 22:11:00 by ccamargo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcnt(const char *s, char c)
{
	size_t			strcnt;
	size_t			i;
	unsigned int	flag;

	strcnt = 0;
	i = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			strcnt++;
			flag = 1;
		}
		if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (strcnt);
}

/*
	i: index of the words in the array
	j: index que travels through the characters of the string
	laststr: index of the beginnig character of each word
	flag: flag used to identify quando a word is found
*/

static char	**feedstrs(char const *s, char c, size_t strcnt, char **strs)
{
	size_t			i;
	size_t			j;
	size_t			laststr;
	unsigned int	flag;

	i = 0;
	j = 0;
	flag = 0;
	while (i < strcnt)
	{
		if (s[j] != c && flag == 0)
		{
			laststr = j;
			flag = 1;
		}
		if (s[j] == '\0' || (s[j] == c && flag == 1))
		{
			strs[i] = ft_substr(s, laststr, j - laststr);
			flag = 0;
			i++;
		}
		j++;
	}
	return (strs);
}

/*
	strncnt: counter of how many words were found in the string s
*/

char	**ft_split(char const *s, char c)
{
	char			**strs;
	size_t			strcnt;

	if (!s)
		return (NULL);
	strcnt = ft_strcnt(s, c);
	strs = (char **) ft_calloc(strcnt + 1, sizeof(char *));
	if (!strs)
		return (NULL);
	feedstrs(s, c, strcnt, strs);
	return (strs);
}
