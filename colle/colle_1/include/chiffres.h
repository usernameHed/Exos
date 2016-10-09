/*
** chiffres.h for include in /home/fenass_b/Colles/Chiffres
** 
** Made by benjamin fenasse
** Login   <fenass_b@epitech.net>
** 
** Started on  Tue Apr 28 14:43:53 2015 benjamin fenasse
** Last update Tue Apr 28 17:38:07 2015 ugo belfiore
*/

#ifndef __CHIFFRES_H_
#define __CHIFFRES_H_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct	s_data
{
  int		result;
  int		*tab;
  int		div;
  int		i;
  int		j;
}		t_data;

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_putnbr(int nb);
int	my_getnbr(char *str);
int	lfd(int *tab, int div, int limit);
int	lfds(int *tab, int div, int limit);
int	lfdm(int *tab, int div, int limit);
void	divider(t_data *data);

#endif /* !__CHIFFRES__ */
