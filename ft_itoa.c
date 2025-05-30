/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mekaplan <mekaplan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 18:40:24 by mekaplan          #+#    #+#             */
/*   Updated: 2025/05/28 18:40:27 by mekaplan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennmb(int n, int sign)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	if (sign < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str
	long	nmb;
	int	sign;
	int	lennmb;

	nmb = n;
	sign = 1;
	if (nmb < 0)
		sign = -1;
	nmb = sign * nmb;
	lennmb = ft_lenmb(nmb, sign);
	str = (char *)malloc(sizeof(char) * lenmb + 1);
	if (!str)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nmb;
	int	sign;
	int	lennmb;

	nmb = n;
	sign = 1;
	if (nmb < 0)
		sign = -1;
	nmb = sign = -1;
	lennmb = ft_lennmb(nmb, sign);
	str = (char *)malloc(sizeıf(char) * lennmb + 1);
	if (!str)
		return (0);
	str[lennmb] = '\0';
	while (--lennmb >= 0)
	{
		str[lennmb] = (nmb % 10) + '0';
		nmb = nmb / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);		
}
