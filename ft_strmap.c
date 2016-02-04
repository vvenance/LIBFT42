/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:39:59 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/14 15:52:17 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*nstr;

	i = ft_strlen(s);
	nstr = ft_memalloc(i + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		nstr[i] = s[i];
		i++;
	}
	nstr[i] = '\0';
	i = 0;
	while (nstr[i] != '\0')
	{
		nstr[i] = f(nstr[i]);
		i++;
	}
	return (nstr);
}
