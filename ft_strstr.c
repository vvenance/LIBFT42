/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:26:35 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/14 15:53:34 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;
	int		mark;

	i = 0;
	if (!s2 || s2[i] == '\0')
		return (char *)(s1);
	while (s1[i])
	{
		j = 0;
		mark = -1;
		if (s1[i] == s2[j])
			mark = i;
		while (s1[i] == s2[j] && s2[j] != '\0')
		{
			if (s2[j + 1] == '\0')
				return (char *)&s1[mark];
			i++;
			j++;
		}
		if (mark != -1)
			i = mark;
		i++;
	}
	return (NULL);
}
