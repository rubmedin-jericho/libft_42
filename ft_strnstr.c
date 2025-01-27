/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/08 21:12:05 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/27 19:00:51 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	same_str(const char *big, const char *little, size_t *tmp, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	aux;

	i = 0;
	j = 0;
	k = ft_strlen(little);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[j] && j < k)
		{
			if (big[i] == little[0])
			{
				*tmp = i;
			}
			j++;
			if(big[i] == little[k - 1])
				return (j);
		}
		else
		{
			j = 0;
			i = aux;
		}
		i++;
	}
	return (j);
}
*/
/*
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
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_lit;

	(void)len;
	if (!little || !*little)
		return ((char *)big);
	i = 0;
	len_lit = ft_strlen(little);
	while(ft_strncmp(&big[i], little, len_lit) && \
			big[i + len_lit - 1]!= '\0' && i + len_lit < len)
	{
		i++;
		//printf("\nERROR_num: %d\n", ft_strncmp(&big[i], little, len_lit));
		//printf("str: %s\nlittle: %s\n", &big[i], little);
		if(!ft_strncmp(&big[i], little, len_lit))
			return ((char *)&big[i]);	
	}
	printf("result_: %s\ni: %li\n", &big[i], i);
	if(ft_strncmp(&big[i], little, len_lit) && big[i + len_lit] != '\0')
		return (NULL);
 	return (char *)&big[i];
	//return (NULL);
}
int	main()
{
	//printf("result_!: %s",ft_strnstr("aaabcabcd", "aabc", -1));
	//printf("result_!: %s",ft_strnstr("aaabcabcd", "bc", 5));
//	printf("result_!: %s",ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("result_!: %s",ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	return (0);
}
