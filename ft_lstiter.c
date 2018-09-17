/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbixby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:24:06 by bbixby            #+#    #+#             */
/*   Updated: 2018/09/12 07:36:26 by bbixby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
    while (lst)
    {
        (*f)(lst);
        lst = lst->next;
    }
}
