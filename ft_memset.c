/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:59:27 by vvenance          #+#    #+#             */
/*   Updated: 2015/11/30 13:47:08 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c2;
	size_t			i;
	char			*b2;

	c2 = (unsigned char)c;
	i = 0;
	b2 = (char *)b;
	while (i != len)
		b2[i++] = c2;
	return (b);
}
