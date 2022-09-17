/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchin <pchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:14:47 by pchin             #+#    #+#             */
/*   Updated: 2022/09/17 22:05:56 by pchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
!! er... is my way of writing it correct? coz after see others github,
they are using different method...

memmove() function copies n bytes from memory area src to dest.
The memory areas may overlap: 
bytes in src are first copied into a temporary array
that does not overlap src or dest,
and the bytes are then copied from the temporary array to dest.
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dtemp;
	if (dest == NULL && src == NULL)
		return (NULL);
	dtemp = dest;
	if (src < dest)
	{
		while (n != 0)
		{
			*(unsigned char *)(dest + n - 1) = *(unsigned char *)(src + n - 1);
			--src;
			--dest;
			--n;
		}
	}
	else
	{
		while (n != 0)
		{
			*(unsigned char *)dest = *(unsigned char *)src;
			++src;
			++dest;
			--n;
		}
	}
	return (dtemp);
}

// void	*ft_memmove(void *dst, const void *src, size_t len)
// {
// 	void	*ret;

// 	if (dst == NULL && src == NULL)
// 		return (NULL);
// 	ret = dst;
// 	if (src < dst)
// 	{
// 		src += len;
// 		dst += len;
// 		while (len--)
// 			*(char *)--dst = *(char *)--src;
// 	}
// 	else
// 		while (len--)
// 			*(char *)dst++ = *(char *)src++;
// 	return (dst);
// }

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newnew???";

// //    printf("Before memmove dest = %s, src = %s\n", dest, src);
// //    memmove(dest, src, 9);
// //    printf("After memmove dest  = %s, src = %s\n", dest, src);

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    ft_memmove(dest, src, 6);
//    printf("After memmove dest  = %s, src = %s\n", dest, src);

//    return(0);
// }

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char str[20] = "foo-bar"; 
// 	//seg fault if write as char *str; str = "foo-bar";
// 	printf("before ft_memmove: %s\n", str);
// 	ft_memmove(&str[3],&str[0],8);
// 	printf("after ft_memmove: %s\n", str);

// 	// printf("before memmove: %s\n", str);
// 	// memmove(&str[3],&str[4],4);
// 	// printf("after memmove: %s\n", str);
// }
