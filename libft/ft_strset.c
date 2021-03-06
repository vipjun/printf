/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwong <juwong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 19:47:04 by juwong            #+#    #+#             */
/*   Updated: 2018/06/27 02:59:07 by juwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sets all elements of string s to char c
*/

void	ft_strset(char *s, int c)
{
	while (*s)
		*s++ = (char)c;
}
