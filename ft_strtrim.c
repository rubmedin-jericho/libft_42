/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:32:16 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/15 17:40:41 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_len_set(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	count = 0;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count);
}

int	ft_is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while(set[i])	
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	k;
	size_t	i;
	size_t	len;
	char	*str;

	k = 0;
	i = 0;
	len = ft_strlen(s1) - (ft_len_set(s1, set));
	str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	while(s1[k])
	{
		while(ft_is_set(s1[k], set))
			k++;
		str[i] = s1[k];
		i++;
		k++;
	}
	str[i] = '\0';
	return (str);
}
