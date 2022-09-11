/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchin <pchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:41:25 by pchin             #+#    #+#             */
/*   Updated: 2022/09/11 12:01:03 by pchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
!! need to handle NULL? why?

	if (dest == NULL && src == NULL) //if (!dest && !src)
	{
		return (NULL); //can return (0)?
	}
	
memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap. Use memmove(3) if overlap.
Returns a pointer to dest.
https://stackoverflow.com/questions/1201319/
what-is-the-difference-between-memmove-and-memcpy 
https://stackoverflow.com/questions/42427675/
c-what-does-if-dest-src-return-ret-mean

#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Will this get replace?!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 7);
   printf(" After memcpy dest = %s\n", dest);
//    ft_memcpy(dest, src, 7);
//    printf("After ft_memcpy dest = %s\n", dest);
   
   return(0);
}
   0x1 0x2 0x3 0x4 0x5 0x6 0x7 0x8 0x9 0x10 0x11 0x12 0x13
src a   b   c   a   b   c   d   e   f   g     h    i   \0
dst             a   b   c   d   e   f   g     h    i   \0
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	while (n != 0)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		++src;
		++dest;
		--n;
	}
	return (dest);
}
