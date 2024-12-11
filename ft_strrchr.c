/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:08:31 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/06 11:30:55 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char *str;
	int	i;

	str = (char *)s;
	i = (ft_strlen(str) - 1);
	while(i != -1)
	{
		if(str[i] == (char)c)
			return (str = &str[i]);
		i--;
	}
	return (NULL);
}
