/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmabits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:59:47 by phmabits          #+#    #+#             */
/*   Updated: 2020/07/13 12:02:56 by phmabits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char d;
	char e;

	while(a <= '9)
	{
		while(b <= '9')
		{
			while(d <= '9')
			{
				while(e <= '9')
				{
					ft_putchar(a, b, d, e);
					e++;
				}
				d++;
			}
			b++;
		}
		a++;
	}
}
