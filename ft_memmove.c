/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:30:33 by vvenance          #+#    #+#             */
/*   Updated: 2016/01/13 17:19:22 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dstt;
	char	*srcc;
	size_t	i;

	if (len <= 0 || !(src2 = ft_memalloc(len)))
		return (dst);
	i = 0;
	dstt = dst;
	srcc = (char *)src;
	while (i < len)
	{
		src2[i] = srcc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dstt[i] = src2[i];
		i++;
	}
	return (dst);
}
