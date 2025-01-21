/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 00:14:54 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/04 21:17:39 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char    *N2str(char const *s1)
{
    char *str;
    int i;

    str = malloc(sizeof(char) * ft_strlen(s1) + 1);
    if(!str)
        return (NULL);
    i = 0;
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char    *N1str(char const *s2)
{
    char *str;
    int i;

    str = malloc(sizeof(char) * ft_strlen(s2) + 1);
    if(!str)
        return (NULL);
    i = 0;
    while(s2[i])
    {
        str[i] = s2[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int whatIf(const char *s1, const char *s2)
{
    int i;

    i = 0;
    if(!s1)
        i++;
    if(!s2)
        i += 2;
    return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
   char *str;

   if(whatIf(s1, s2) == 1)
       str = N1str(s2); 
   else if(whatIf(s1, s2) == 2)
       str = N2str(s1);
   else if(whatIf(s1, s2) == 3)
       return ("\0");
   return (str);
}
*/
int whatIfN(char const *str)
{
    int i;

    i = 0;
    if(!str)
        i++;
    else
        i = ft_strlen(str);
    return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
        
	str = malloc(sizeof(char) * ((whatIfN(s1) + whatIfN(s2))) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while ((s1[j] || s2[j]) && (i < (ft_strlen(s1) + ft_strlen(s2))))
	{
		if (i <= (ft_strlen(s1) - 1))
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

#include <stdio.h>
int main()
{
    printf("result_ft_strjoin: %s\n", ft_strjoin("\0", "dolor sit amet"));
    return (0);
}
