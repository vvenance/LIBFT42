/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:08:27 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/16 15:01:35 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char			*ntr;
	unsigned int	i;

	ntr = ft_memalloc(len + 1);
	if (!ntr || (int)len < 0)
		return (NULL);
	i = 0;
	while (len != 0)
	{
		ntr[i] = s[start];
		i++;
		start++;
		len--;
	}
	ntr[i] = '\0';
	return (ntr);
}
