/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agadiffe <agadiffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 15:03:12 by agadiffe          #+#    #+#             */
/*   Updated: 2015/02/22 16:27:20 by agadiffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define BASE_2		"01"
# define BASE_8		"01234567"
# define BASE_10	"0123456789"
# define BASE_16_L	"0123456789abcdef"
# define BASE_16_U	"0123456789ABCDEF"

# define CONV_TYPE	"sScCpDdioOuUxXbk%"
# define MOD_TYPE	"hjlz"

# include <stdarg.h>
# include <stdint.h>
# include <stddef.h>

typedef	struct	s_info
{
	int			hash : 1;
	int			space : 1;
	int			minus : 1;
	int			plus : 1;
	int			zero : 1;
	int			sep : 1;
	int			got_prec : 1;
	int			got_width : 1;
	intmax_t	prec;
	intmax_t	width;
	size_t		ret_printf;
	enum
	{
		none,
		h,
		hh,
		l,
		ll,
		j,
		z
	}			mod;
}				t_info;

typedef struct	s_handle
{
	size_t		width;
	size_t		prec;
	size_t		len;
}				t_handle;

int				ft_printf(const char *format, ...);

/*
**	handle_arg.c
*/
typedef	void	(*t_func)(va_list *, t_info *);
t_func			*get_func_array(void);
void			handle_percent_and_invalid(char charactere, t_info *flag);
void			handle_arg(va_list *ap, const char **format, t_info *flag);

/*
**	tools_width_prec.c
*/
void			get_prec_s(t_info *flag, t_handle *s);
void			get_width_s(t_info *flag, t_handle *s);
size_t			get_width(t_info *flag, size_t len, int prefix, uintmax_t nbr);
size_t			get_prec(t_info *flag, size_t len, uintmax_t nbr);

/*
**	tools.c
*/
int				free_ft_printf(int set);
void			do_putnbr_separator(uintmax_t nbr);
int				count_sep(uintmax_t n);

void			count_utf8(unsigned warg, size_t *ret);
void			handle_utf8(unsigned warg);

void			flag_handle(t_info *flag, uintmax_t nbr, char *base,
																char *prefix);

int				flag_opt(const char *format, t_info *flag, va_list *ap);

uintmax_t		handle_unsigned_va_arg(t_info *flag, va_list *ap);

void			handle_int_di(va_list *ap, t_info *flag);
void			handle_long_bigd(va_list *ap, t_info *flag);

void			handle_uint_u(va_list *ap, t_info *flag);
void			handle_ulong_bigu(va_list *ap, t_info *flag);

void			handle_octal_o(va_list *ap, t_info *flag);
void			handle_octal_long_bigo(va_list *ap, t_info *flag);

void			handle_hexa_x(va_list *ap, t_info *flag);
void			handle_hexa_bigx(va_list *ap, t_info *flag);

void			handle_ptr_p(va_list *ap, t_info *flag);

void			handle_char_c(va_list *ap, t_info *flag);
void			handle_wchar_bigc(va_list *ap, t_info *flag);

void			handle_string_s(va_list *ap, t_info *flag);

void			handle_wstring_bigs(va_list *ap, t_info *flag);

void			handle_n(va_list *ap, t_info *flag);

void			handle_binary_b(va_list *ap, t_info *flag);

void			handle_date_k(va_list *ap, t_info *flag);

#endif
