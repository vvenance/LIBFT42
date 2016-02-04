/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:00:30 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/14 16:25:45 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c2;
	size_t			i;
	unsigned char	*s2;
	void			*ptr;

	c2 = (unsigned char)c;
	s2 = (unsigned char *)s;
	i = 0;
	while (i != n && s2[i] != c2)
		i++;
	if (i == n)
		return (NULL);
	ptr = (void *)&s2[i];
	return (ptr);
}
