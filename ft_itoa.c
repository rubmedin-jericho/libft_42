/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubmedin <rubmedin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:31:50 by rubmedin          #+#    #+#             */
/*   Updated: 2024/12/18 12:11:07 by rubmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int	n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n != 0 && n > -1)	
	{
		i++;
		n = n / 10;	
	}
	return (i);
}

char *ft_special_case(int n)
{
	char	*str;
	
	str = malloc(sizeof(char) * 9);
	if (n >= 2147483647)	
		str = "2147483647";
	else if (n <= -2147483648)
		str = "-2147483648";
	return (str);
}

char	*ft_itoa(int	n)
{
	char	*str;
	int	len;

	len = ft_intlen(n);
	if (n >= MAX_INT)
		return ("2147483647");
	else if (n <= MIN_INT)
		return ("-2147483648");
	str = malloc(sizeof(char) * (len + 1));
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 10)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
	if (n < 10 && n > 0)
		str[--len] = (n % 10) + '0';
	return (str);
}
