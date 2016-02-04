/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:07:31 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/15 17:58:21 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		if_signe(int *i, int *j, int *k, const char *str)
{
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '+')
			(*k)++;
		if (str[*i] == '-')
			(*j)++;
		(*i)++;
	}
}

int				ft_atoi(const char *str)
{
	int		i;
	int		j;
	int		k;
	int		nbr;

	i = 0;
	j = 0;
	k = 0;
	nbr = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	if_signe(&i, &j, &k, str);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		nbr = (str[i++] - '0') + (10 * nbr);
	if (j == 1)
		nbr = nbr * -1;
	if ((j > 1 || k > 1) || (j == 1 && k == 1))
		nbr = 0;
	return (nbr);
}
