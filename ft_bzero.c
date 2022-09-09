/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchin <pchin@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:40:49 by pchin             #+#    #+#             */
/*   Updated: 2022/09/08 18:00:02 by pchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// !! why memset prototype is *, while bzero without?
//
// The bzero() function erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros (bytes
// containing '\0') to that area.
// void	ft_bzero(void *s, size_t n)
// {
// 	size_t	i;
// 	i = 0;
// 	while (i > n)
// 	{
// 		*(unsigned char *)s = 0;
// 		++i;
// 		++s;
// 	}
// }

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
