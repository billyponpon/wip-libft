/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchin <pchin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 20:52:39 by pchin             #+#    #+#             */
/*   Updated: 2022/09/11 15:06:06 by pchin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int main(int argc, char *argv[])
// {
// 	printf("Mine: %d\n", ft_atoi(argv[1]));
// 	printf("Standard: %d\n", atoi(argv[1]));
// }

int	ft_atoi(const char *str)
{
	int	j;
	int	sym;

	j = 0;
	sym = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
			++str;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sym = sym * -1;
		}
		++str;
	}
	while (*str >= '0' && *str <= '9')
	{
		j = j * 10;
		j = j + (*str - 48);
		++str;
	}
	return (j * sym);
}
