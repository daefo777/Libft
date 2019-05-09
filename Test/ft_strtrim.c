/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 22:04:35 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/07 10:32:12 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	//char		*copy;
	size_t		start;
	size_t		end;

	start = 0;
	while (ft_iswhitespace(s[start]))
		start++;
	end = ft_strlen(s);
	while (ft_iswhitespace(s[end - 1]))
		end--;
	if (end < start)
		end = start;
	/*copy = (char *)malloc(end - start + 2);
	if (!copy)
		return (NULL);
	ft_strncpy(copy, s + start, end - start + 1);
	copy[end - start + 1] = '\0';
	return (copy);*/
	return (ft_strsub(s, start, end - start));
}

int		main(void)
{
	char const	*str = "		df d\tdd		";

	printf("%s", ft_strtrim(str));
	return (0);
}
