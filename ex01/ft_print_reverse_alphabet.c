/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phmabits <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 09:24:30 by phmabits          #+#    #+#             */
/*   Updated: 2020/07/13 11:47:34 by phmabits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void 	ft_print_reverse_alphabet(void)
{
	char b;
	b = 'z';
	while (b >= 'a')
	{
		ft_putchar(b);
		b--;
	}
}

