/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbixby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:12:24 by bbixby            #+#    #+#             */
/*   Updated: 2018/09/11 03:52:26 by bbixby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char		*ft_strsub(char const *s, unsigned intstart, size_t len)
{
	char	*str;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	i = -1;
	start = (size_t)intstart;
	while (++i < len)
		*(str + i) = *(s + start + i);
	*(str + i) = '\0';
	return (str);
}
