/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:22:12 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/12 19:54:32 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*nstr;
	size_t	i;

	nstr = (char *)malloc(sizeof(*nstr) * size + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (nstr[i])
	{
		nstr[i] = '\0';
		i++;
	}
	return (nstr);
}
