/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 09:55:39 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/12 16:34:58 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*fresh;
	int		i;
	int		nbr;

	i = 0;
	nbr = ft_countdigit(n);
	fresh = ft_strnew(nbr);
	if (!fresh)
		return (NULL);
	fresh[nbr] = 0;
	if (n == -2147483648)
		return (ft_strncpy(fresh, "-2147483648", nbr + 1));
	else if (n < 0)
	{
		n = -n;
		fresh[0] = '-';
		i++;
	}
	while (i < nbr--)
	{
		fresh[nbr] = (n % 10) + '0';
		n /= 10;
	}
	return (fresh);
}
