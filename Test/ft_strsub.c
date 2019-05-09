/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 00:14:00 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/06 15:56:28 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 	*fresh;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	fresh = ft_strnew(len);
	if (!fresh)
		return (NULL);
	ft_strncpy(fresh, s + start, len);
	fresh[len] = '\0';
	return (fresh);
}

int		main(void)
{
	char const		*s = "abcd";
	unsigned int	start;
	size_t			len;

	start = 2;
	len = ft_strlen(s);
	printf("%s", ft_strsub(s, start, len));
	return (0);
}
