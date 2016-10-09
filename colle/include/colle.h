/*
** mini.h for  in /home/belfio_u/rendu/EXOTEST/FDF
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Oct 28 09:26:37 2014 ugo belfiore
** Last update Wed Apr 29 10:41:38 2015 ugo belfiore
*/

#ifndef COLLE_H_
#define COLLE_H_

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX(a,b) ((a) > (b)) ? (a) : (b)
#define MIN(a,b) ((a) < (b)) ? (a) : (b)

typedef struct	s_data
{
  char          buff[8192000];
  int		i;
}               t_data;

void    my_putchar(char c);
int     my_put_nbr(int nb);
int     my_swap(int *a, int *b);
int     my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
void    my_sort_int_tab(int *tab, int size);
int     my_power_rec(int nb, int power);
int     my_square_root(int nb);
int     my_is_prime(int nb);
char    *my_revstr(char *str);
char    *my_strstr(char *str, char *to_find);
char    *my_strcat(char *dest, char *src);
void    my_putnbr_base(int nb, char *base);
int     my_getnbr_base(char *str, char *base);
char    *my_strdup(char *tab1);
char    *my_int_char(int nbr);
char    **my_str_to_wordtab(char *str);
void    my_show_wordtab(char **tab);
int     my_rand(unsigned int m);
int     my_putchar_return(char c);
int     my_putnbr_base_return(long nb, char *base);
int     my_put_nbr_long(long nb);
int     my_put_nbr_uns(unsigned int nb);
int     my_put_nbr_hexa_P(unsigned long nb, char *base);
int     my_put_S(char *str);
void    aff_0(int nb);
int     my_put_S(char *str);
int     my_printf(const char *format, ...);
char    *convert_base(char *nbr, char *base_from, char *base_to);

#endif /* !COLLE_H */
