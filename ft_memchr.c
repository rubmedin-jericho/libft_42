/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:18:58 by rubmedin          #+#    #+#             */
/*   Updated: 2024/11/22 17:27:45 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_char(char c)
{
	if(c < 32 || c >= 126)
		return (1);
	return (0);
}
void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	letter;
	size_t		i;
	char		*str;

	letter = (unsigned char)c;
	str = (char *)s;
	if((print_char(letter) == 1) || str[0] == '\0' || str == NULL)
		return (NULL);
	i = 0;
	while(str[i] && i < n)
	{
		if(str[i] == letter)
		{
			str = &str[i];
			return (str);
		}
		i++;
	}
	return (NULL);	
}
