/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 18:59:53 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/12 22:25:53 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_check_string(int argc, char *argv[]);
int	ft_check_array(char *argv[]);
int	ft_logic_main(int *arr, int out[4][4]);

int	main(int argc, char *argv[])
{
	int	error;
	int	arr[16];
	int	out[4][4];

	error = 0;
	error = ft_check_string(argc, argv);
	if (error == 1)
		write(1, "Error\n", 6);
	else
	{
		error = ft_check_array(argv);
		if (error == 1)
			write(1, "Error\n", 6);
		else
			ft_logic_main(arr, out);
	}		
	return (0);
}
