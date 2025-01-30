/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:32:16 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/30 11:57:41 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	is_start_set(char const *s1, char const *set)
{
	size_t	j;

	size_t	i;	
	i = 0;
	while(s1[i])
	{
		j = 0;
		while(set[j])
		{
			if(set[j] == s1[i])
			j++;
		}
		i++;
	}
	return (0);
}
*/

/*char	*rv_strchr(const char *s, int c)
{
	size_t			len;
	unsigned char	*str;
	unsigned char	cc;

	str = (unsigned char *)s;
	cc = (unsigned char)c;
	len = (ft_strlen((char *)s) - 1);	
	printf("str: %s\n", s);
	while (len > 0)
	{
		printf("num: %li\n", len);
		if (cc == str[len])
			return ((char *)str[len]);
		len--;
	}
	if (str[len] && cc == '\0')
		return ((char *)&str[len]);
	return (NULL);
}
*/

/*
size_t	count_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while(s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}
*/
/*
size_t	count_end(const char *s1, const char *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while(i > 0 && rv_strchr(set, s1[i]))
		i--;
	printf("result_ft: %li\n", (ft_strlen(s1) - i));
	return (ft_strlen(s1));
}
*/
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;

	i = count_start(s1, set);
	printf("str[%li]: %c\nstr[%li]: %c\n", i, s1[i], count_end(s1, set),
			s1[count_end(s1, set)]);
	str = malloc(sizeof(char) * (ft_strlen(s1) - count_start(s1, set)\
				- count_end(s1, set)) + 1);
	while(i < count_end(s1, set))
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	st;
	size_t	end;
	char	*str;

	st = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[st] && ft_strchr(set, s1[st]))
		st++;
	while (end > st && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - st + 1));
	if (str)
		ft_strlcpy(str, &s1[st], end - st + 1);
	return (str);
}
