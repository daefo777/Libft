/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <idaeho@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 10:33:35 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/08 19:47:32 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char			**fresh;
	unsigned int	nbr_arr;
	unsigned int	i;

	i = -1;
	nbr_arr = ft_countwords(s, c);
	fresh = (char **)malloc(sizeof(char *) * (nbr_arr + 1));
	if (!fresh)
		return (NULL);
	ft_storewords(fresh, s, c);
	while (++i < nbr_arr)
		if (!fresh[i])
			return (NULL);
	fresh[nbr_arr] = 0;
	return (fresh);
}

int		main(void)
{
	char const		*s = "**hello*fellow***students*";
	char			c = '*';
	char			**a;
	int				i = -1;

	a  = ft_strsplit(s, c);
	while (a[++i])
		printf("%s\n", a[i]);
	return (0);
}
