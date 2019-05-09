/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 16:34:05 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/05 17:53:32 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	ft_strdel(char **as)
{
//	ft_memdel((void **)as);
	free(*as);
	*as = NULL;
}

int		main(void)
{
	char	**c1;

	c1 = (char **)malloc(5);
	*c1 = (char *)malloc(30);
	ft_strdel(c1);
	return (0);
}
