/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:12:05 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/16 21:20:00 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	same_str(const char *big, const char *little, size_t *tmp, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = ft_strlen(little);
	while (i < len)
	{
		if (big[i] == little[j] && j < k)
		{
			if (big[i] == little[0])
				*tmp = i;
			j++;
			if(big[i] == little[k - 1])
				return (j);
		}
		else
			j = 0;
		i++;
	}
	return (j);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_1;
	char	*tmp;

	if (!little || !*little)
		return ((char *)big);
	i = 0;
	j = same_str(big, little, &i, len);
	len_1 = ft_strlen(little);
	if (j != len_1)
		return (NULL);
	tmp = (char *)&big[i];
	return (tmp);
}
