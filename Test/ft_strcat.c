/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:45:39 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/06 20:08:43 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *restrict dest, const char *restrict src)
{
	char *ptr;

	ptr = dest;
	while (*ptr)
		ptr++;
	ft_strcpy(ptr, src);
	return (dest);
}

int		main(void)
{
	char		*dest;
	const char	*src = "1234567";

	dest = malloc(20);
	dest = ft_memcpy(dest, src, 4);

	printf("%s", ft_strcat(dest, src));
	return (0);
}
