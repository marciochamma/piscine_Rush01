/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:09:19 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/12 19:48:46 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

// Check the qty of arguments, qty of characters and if only numeric
int	ft_check_string(int argc, char *argv[])
{
	int	error;
	int	x;

	error = 0;
	if (argc != 2)
		error = 1;
	x = 0;
	while (argv[1][x] != '\0')
	{
		if (argv[1][x] < 48 || argv[1][0] > 57)
		{
			if (argv[1][x] != 32)
				error = 1;
		}
		x++;
	}
	if (x != 31)
		error = 1;
	return (error);
}

