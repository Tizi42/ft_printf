/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/07 20:09:30 by tyuan             #+#    #+#             */
/*   Updated: 2020/08/18 14:10:42 by tyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	int	width;
	int	precision;
	int	flag_zero;
	int	flag_minus;
}				t_list;

int				ft_printf(const char *str, ...);
t_list			*ft_lstnew(void);
int				print_arg(char *str, int i, va_list ap, int *p);
int				checkzero(long int n, t_list *format);
int				checkptr(char *hexa);

void			putchr_multi(char c, int times);
int				ft_strlen(char *str);
int				expo_2(unsigned int n);
char			deci_hexa(int n);
int				ptradrr(void *ptr, char *hexa, t_list *format);

int				len(long int n);
void			f_putnbr(long int nb);
int				len_x(long int n);
char			*tohexa(long int n, int nlen, char s);
void			stock_x(long int n, int nlen, char *hexa, char *base);

int				flags(char s, t_list *format);
int				width(char s, t_list *format, va_list ap);
int				precision(char s, t_list *format, va_list ap);
int				type(char s, t_list *format, va_list ap);

int				print_c(char chr, t_list *format);
int				print_s(char *str, t_list *format);
int				print_p(void *ptr, t_list *format);
int				print_percentage(t_list *format);

int				print_di(int n, t_list *format);
void			di(int nega, int nlen, long int n, t_list *format);
int				print_u(unsigned int n, t_list *format);
int				print_x(unsigned int n, t_list *format, char s);
void			xx(char *hexa, int nlen, int lenth, t_list *format);

void			checknega(int nega);
char			checkflagzero(t_list *format);
int				pointer(int len, char *hexa, t_list *format);

#endif
