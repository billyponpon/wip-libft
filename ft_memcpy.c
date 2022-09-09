/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchin <pchin@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 12:41:25 by pchin             #+#    #+#             */
/*   Updated: 2022/09/08 18:40:38 by pchin            ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Will this get replace?!");
   printf("Before memcpy dest = %s\n", dest);
//    memcpy(dest, src, 7);
//    printf("After memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 7);
   printf("After ft_memcpy dest = %s\n", dest);
   
   return(0);
}