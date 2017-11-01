/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinfeld <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 18:23:21 by jinfeld           #+#    #+#             */
/*   Updated: 2017/09/20 14:49:04 by jinfeld          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <fcntl.h>
# include <limits.h>
# include <locale.h>
# include <stdarg.h>
# define BUFF_SIZE 2

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_memccpy(void *restrict dst, const void *restrict src,
								int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *restrict dst, const void *restrict src,
								size_t n);
void				ft_putchar(char c);
void				ft_putstr(char const *str);
void				ft_putnbr(int nb);
size_t				ft_strlen(char const *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_memdel(void **ap);
void				ft_striter(char *s, void (*f)(char *));
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *new);
char				*ft_strdup(const char *s1);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_strdel(char **as);
int					ft_isalnum(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strtrim(char const *s);
char				*ft_strstr(const char *big, const char *little);
char				**ft_strsplit(char const *s, char c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *big, const char *little,
								size_t len);
char				*ft_strnew(size_t size);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_putendl(char const *s);
char				*ft_itoa(intmax_t n);
void				ft_putendl_fd(char const *s, int fd);
void				ft_strclr(char *s);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_isascii(int c);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_putnbr_fd(int nb, int fd);
void				*ft_memalloc(size_t size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
char				*ft_strchr(const char *s, int c);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_isprint(int c);
char				*ft_itoa_base(uintmax_t n, int base, int caseflag);
char				*ft_strndup(const char *s1, size_t n);
int					gnl(const int fd, char **line);
typedef struct	s_flag
{
	int			marg;
	int			mod;
	int			octothorpe;
	int			zero;
	int			minus;
	int			plus;
	int			space;
	int			precision;
	int			isneg;
	int			wide;
	int			len;
	int			edit;
	char		c;
	char		*str;
	wchar_t		*wstr;
}				t_flag;
char			*di(va_list args, char c, int mod);
char			*o(va_list args, char c, int mod);
char			*u(va_list args, char c, int mod);
char			*x(va_list args, int mod);
char			*capx(va_list args, int mod);
char			*ch(va_list args, int mod);
char			*s(va_list args, int mod);
char			*p(va_list args, int mod);
wchar_t			*wc(va_list args, char c, int mod);
wchar_t			*ws(va_list args, char c, int mod);
int				ft_putchar_count(char c);
void			printocto(t_flag flag);
int				printzero(t_flag flag, int len);
int				printmarg(t_flag flag, int len);
int				printminus(t_flag flag, int len);
char			*conhub(va_list args, char c, int mod);
wchar_t			*wconhub(va_list args, char c, int mod);
void			getmod(t_flag *flag, char *str);
void			flagnew(t_flag *flag);
int				setflagvalue(int *n, int value, int cur);
void			flagparse(t_flag *flag, char *str, va_list args);
int				handleprecision(t_flag *flag, int len);
int				rightpad(t_flag flag, int len);
int				leftpad(t_flag flag, int *len);
int				demprintz(t_flag flag);
int				printlen(t_flag *flag);
int				wprintlen(t_flag *flag);
int				ft_printf(const char *format, ...);
void			ddelete(char **str);
void			getformat(char **str, t_flag *flag, va_list args);


#endif
