/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchin <pchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:47:59 by pchin             #+#    #+#             */
/*   Updated: 2022/09/11 15:07:26 by pchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
!! why memset prototype is *, while bzero without?

The memset() function fills the first n bytes of the memory area
pointed to by s with the constant byte c.
The memset() function returns a pointer to the memory area s.

https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
memset() is used to fill a block of memory with a particular value.
s is a void pointer, so that we can pass any type of pointer to this function.
This is a pointer to the block of memory to fill.

c − This is the value to be set. The value is passed as an int, 
but the function fills the block of memory 
using the unsigned char conversion of this value.

n − This is the number of bytes to be set to the value.

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)s = c;
		++i;
		++s;
	}
	return (s);
}
