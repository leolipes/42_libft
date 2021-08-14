/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leolipes <leolipes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:48:54 by leolipes          #+#    #+#             */
/*   Updated: 2021/08/13 13:48:31 by leolipes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(long int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_putitoa(long int n, char *str, size_t *i)
{
	if (n >= 10)
	{
		ft_putitoa(n / 10, str, i);
		ft_putitoa(n % 10, str, i);
	}
	else
	{
		str[*i] = n + '0';
		(*i)++;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	long int	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (ft_nbrlen(nbr) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		str[i] = '-';
		i++;
		nbr = nbr * -1;
	}
	ft_putitoa(nbr, str, &i);
	str[i] = '\0';
	return (str);
}
