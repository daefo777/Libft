/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idaeho <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:49:21 by idaeho            #+#    #+#             */
/*   Updated: 2019/05/05 17:24:54 by idaeho           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	ft_memdel(void *ap)
{
	free(ap);
	ap = NULL;
}

int		main(void)
{
	void	*c1;

	c1 = malloc(30);
	ft_memdel(c1);
	return (0);
}
