/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvenance <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:02:13 by vvenance          #+#    #+#             */
/*   Updated: 2015/12/12 18:43:04 by vvenance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *nptr;

	nptr = (void *)malloc(size);
	if (nptr == NULL)
		return (NULL);
	ft_bzero(nptr, size);
	return (nptr);
}
