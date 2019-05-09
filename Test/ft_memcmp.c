/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 23:06:52 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/04 11:43:41 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ss1;
	unsigned char	*ss2;
	size_t			i;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n && *ss1 == *ss2)
	{
		i++;
		ss1++;
		ss2++;
	}
	if (i == n)
		return (0);
	return (*ss1 - *ss2);
}

int		main(void)
{
	char	*s1 = "123";
	char	*s2 = "123";
	size_t	n = 10000000;

	printf("%d", ft_memcmp(s1, s2, n));
	return (0);
}
