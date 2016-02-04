/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:18:49 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/14 15:50:34 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (c == '\0')
		return (char *)(&s[ft_strlen(s)]);
	if (i != 0)
	{
		while (s[i] != (char)c && i != 0)
			i--;
		if (s[i] == (char)c)
			return (char *)(&s[i]);
	}
	return (NULL);
}
