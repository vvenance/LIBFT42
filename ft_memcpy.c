/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:15:55 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/14 16:25:00 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	if (!n)
		return (dst);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (n--)
	{
		*dst2++ = *src2++;
	}
	return (dst);
}
