/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:50:29 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/12 19:14:34 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*nstr;

	i = ft_strlen((char *)s);
	nstr = ft_memalloc(i + 1);
	if (nstr == NULL)
		return (NULL);
	if (s && f)
	{
		i = 0;
		while (s[i])
		{
			nstr[i] = f(i, s[i]);
			i++;
		}
		nstr[i] = '\0';
		return (nstr);
	}
	return (NULL);
}
