/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 13:03:11 by rubmedin          #+#    #+#             */
/*   Updated: 2025/01/18 20:46:28 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	type_of(const char c)
{
    if(c == 27)
        return (2);
    else if (c <= 32)
    {
        return (1);
    }
	return (0);
}

void signFill(const char *nptr, int *i, int *sign)
{
    if(nptr[*i] == '-' || nptr[*i] == '+')
        {
            if(nptr[*i] == '-')
                *sign = -1;
            *i += 1;
        }
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	nbr;
	int	i;

	sign = 1;
	nbr = 0;
	i = 0;
    while (type_of(nptr[i]) == 1)
        i++;
    signFill(nptr, &i, &sign);
	while (nptr[i] && !ft_isalpha(nptr[i]) && type_of(nptr[i]) == 0)
	{
		if (ft_isprint(nptr[i]) && !(ft_isdigit(nptr[i])))
        {
            return (nbr * sign);
        } 
		if(ft_isdigit(nptr[i]))
            nbr = (nbr * 10) + (nptr[i] - '0');
		i++;
	}
	return (nbr * sign);
}
