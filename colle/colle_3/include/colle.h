/*
** colle.h for  in /home/belfio_u/Hed/colle/colle_3/include
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May 12 14:27:42 2015 ugo belfiore
** Last update Tue May 12 17:17:51 2015 ugo belfiore
*/

#ifndef COLLE_H_
#define COLLE_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct  s_data
{
  char          buff[8192000];
  int		size;
  int		j;
  int		i;
  int		colone;
  int		zone;
  int		zz;
  int		t;
  int		no;
}               t_data;

typedef struct	s_var
{
  int		*ptr;
  char		*str;
  char		c;
  int		i;
  int		j;
  int		k;
}		t_var;

int	my_getnbr(char *str);
void	my_putstr(char *str);
void	my_putchar(char c);
int	my_strlen(char *str);
void	my_show_c(t_data *d, int *ptr, int size);
void	my_show_d(t_data *d, int *ptr, int size, char c);
int	*my_sort_int_tab(int *tab, int size);
void	my_swap(int *a, int *b);
char	**my_wordtab_sep(char *str, char c);

#endif /* !COLLE_H */
