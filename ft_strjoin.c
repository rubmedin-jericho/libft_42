/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 00:14:54 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/15 00:46:43 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	i = 0;
	j = 0;
	while((s1[j] || s2[j]) && i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		if(i <= (ft_strlen(s1) - 1))
			str[i] = s1[i];
		else 
		{
			str[i] = s2[j];
			j++;
		}
		i++;	
	}
	str[i] = '\0';
	return (str);
}
