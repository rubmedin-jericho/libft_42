/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:12:05 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/10 12:40:47 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	same_str(const char *big, const char *little, size_t *tmp, size_t	len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	(void)tmp;
	while(big[i] && i < len)
	{
		if(big[i] == little[k] && j < ft_strlen(little))
		{
			if(big[i] == little[0])
				*tmp = i;
			printf("j: %li\n", j);
			j++;
			k++;
		}
		else
			k = 0;
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

	if(!little || !*little)
		return ((char *)big);
	i = 0;
	j = same_str(big, little, &i, len);
	len_1 = ft_strlen(little);
	if(j != len_1)
	{
		printf("1_Error\nlen_1: %li\nJ: %li\nI: %li\n", len_1, j, i);
		return ((char)NULO);
	}
	tmp = (char *)&big[i];
	return (tmp);

}
