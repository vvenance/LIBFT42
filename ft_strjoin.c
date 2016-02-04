/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:19:03 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/03 16:34:13 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		i;
	int		j;

	nstr = NULL;
	nstr = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while ((size_t)i != ft_strlen(s1))
		nstr[i++] = s1[j++];
	j = 0;
	while ((size_t)i != (ft_strlen(s1) + ft_strlen(s2) + 1))
		nstr[i++] = s2[j++];
	nstr[i] = '\0';
	return (nstr);
}
