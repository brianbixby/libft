/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbixby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 10:49:02 by bbixby            #+#    #+#             */
/*   Updated: 2018/09/16 23:28:04 by bbixby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dptr;
	char	*sptr;

	dptr = (char *)dst;
	sptr = (char *)src;
	if (dptr < sptr)
		while (len--)
			*(dptr++) = *(sptr++);
	else
		while (len--)
			*(dptr + len) = *(sptr + len);
	return (dst);
}
