/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:02:05 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/14 15:54:02 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*nstr;

	nstr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (nstr == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i])
		{
			nstr[i] = s1[i];
			i++;
		}
		nstr[i] = '\0';
		return (nstr);
	}
}
