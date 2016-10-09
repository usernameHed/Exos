/*
** colle.h for  in /home/belfio_u/rendu/rush_and_colle/COLLE/colle_1
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Apr 28 14:30:48 2015 ugo belfiore
** Last update Tue Apr 28 17:39:10 2015 ugo belfiore
*/

#ifndef COLLE_H_
#define COLLE_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
  int		num;
  int		*result_mult;
  int		*result_div;
  int		*result_div_inv;
  int		*result_add;
  int		*result_sou;
  int		*result_sou_inv;
  int		*result_mod;
  int		*result_mod_inv;
  int		statement;
}		t_list;

typedef struct	s_dataa
{
  int		ac;
  int		result;
  t_list	*tab;
}		t_dataa;

void	test_good(t_dataa *d, int i, int j);
void	test_good_bis(t_dataa *d, int i, int j);
void	test_good_sub(t_dataa *d, int i, int j);
void	test_good_mod(t_dataa *d, int i, int j);
void	make_brute(int ac, char **av);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_putnbr(int nb);
int	my_getnbr(char *str);

#endif /* !__COLLE_H__*/
