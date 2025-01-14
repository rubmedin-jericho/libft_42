/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:53:53 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/04 21:17:14 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_len_split(char *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == c)
			j++;
		i++;
	}
	return (j);
}

size_t	ft_len_ptr(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	*ft_create_ptr(char **s, char c)
{
	size_t	len;
	size_t	i;
	char	*str;

	len = ft_len_ptr(*s, c);
	str = malloc(sizeof(char) * (len + 1));
	i = 0;
	while (s[0][i])
	{
		if (s[0][i] == c)
		{
			i++;
			s[0] = &s[0][i];
			return (str);
		}
		str[i] = s[0][i];
		i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	*str;
	size_t	len;
	size_t	i;

	str = (char *)s;
	len = ft_len_split(str, c);
	split = malloc(sizeof(char *) * (len + 1));
	while (len != 0)
	{
		split[i] = ft_create_ptr(&str, c);
		i++;
		len--;
	}
	return (split);
}
