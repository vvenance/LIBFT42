/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:23:32 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/06 19:47:36 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*src2;
	unsigned char	*dst2;

	i = 0;
	dst2 = dst;
	src2 = (char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (src2[i] == c)
			return (void *)(&dst2[i + 1]);
		i++;
	}
	return (NULL);
}
