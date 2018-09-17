/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbixby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:05:17 by bbixby            #+#    #+#             */
/*   Updated: 2018/09/11 00:23:22 by bbixby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		*ft_memalloc(size_t size)
{
	void	*vptr;
	char	*chptr;

	if (!(vptr = (void *)malloc(sizeof(*vptr) * size)))
		return (NULL);
	chptr = (char *)vptr;
	while (size--)
		*chptr++ = (unsigned char)0;
	return (vptr);
}
