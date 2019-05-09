/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:47:46 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/02 20:59:38 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *source, size_t len)
{
	char		*d;
	const char	*s;
	size_t		i;

	i = 0;
	d = (char *)dest;
	s = (const char *)source;
	if (s < d)
	{
		while (len--)
		{
			*(d + len) = *(s + len); //make overlapping possible
		}
	}
	else
	{
		while (i < len)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dest);
}

int		main(void)
{
	char	d[] = "abcde";
	size_t	len;

	len = 3;
	ft_memmove(d + 2, d, len);
	printf("%s", d);
	return (0);
}
