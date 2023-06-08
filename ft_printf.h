/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabreia- <tabreia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:43:43 by tabreia-          #+#    #+#             */
/*   Updated: 2022/12/05 14:33:51 by tabreia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_putnbr_u(unsigned int nbr);
int		ft_puthex(unsigned int nbr, char *base);
int		ft_printmem(void *nbr);
int		ft_printf(const char *format, ...);

char	*ft_utoa(unsigned int n);
char	*ft_strchr(const char *s, int c);

#endif
