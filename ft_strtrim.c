/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 13:34:55 by vvenance          #+#    #+#             */
/*   Updated: 2016/01/13 16:45:44 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*nstr;
	size_t	i;
	size_t	j;

	if (s == NULL || !s)
		return (char *)(s);
	i = 0;
	j = 0;
	if ((nstr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != '\0')
	{
		nstr[j] = s[i];
		j++;
		i++;
	}
	while (nstr[j - 1] == ' ' || nstr[j - 1] == '\n' || nstr[j - 1] == '\t')
	{
		nstr[j - 1] = '\0';
		j--;
	}
	nstr[j] = '\0';
	return (nstr);
}
