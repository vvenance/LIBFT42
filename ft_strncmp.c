/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:35:22 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/14 15:50:01 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	if (!s1 && !s2 && !n)
		return (0);
	i = 0;
	if (ft_strlen(s1) < n)
		n = ft_strlen(s1) + 1;
	if (ft_strlen(s2) < n)
		n = ft_strlen(s2) + 1;
	while (n--)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
