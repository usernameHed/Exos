/*
** div_calc.c for diviser in /home/fenass_b/Colles/Chiffres
** 
** Made by benjamin fenasse
** Login   <fenass_b@epitech.net>
** 
** Started on  Tue Apr 28 16:38:06 2015 benjamin fenasse
** Last update Tue Apr 28 17:29:43 2015 ugo belfiore
*/

#include "chiffres.h"

int		lfd(int *tab, int div, int limit)
{
  int		i;
  int		j;

  i = j = -1;
  while (tab[++i])
    {
      j = -1;
      while (tab[++j])
        {
          if ((div - tab[j]) == tab[i]
              && i != j && i != limit && j != limit)
            {
              my_putnbr(tab[j]);
              my_putstr(" + ");
              my_putnbr(tab[i]);
              my_putstr(" = ");
              my_putnbr(div);
              my_putchar('\n');
              return (1);
            }
        }
    }
  return (0);
}

int		lfds(int *tab, int div, int limit)
{
  int		i;
  int		j;

  i = j = -1;
  while (tab[++i])
    {
      j = -1;
      while (tab[++j])
        {
          if ((div + tab[j]) == tab[i]
              && i != j && i != limit && j != limit)
            {
              my_putnbr(tab[j]);
              my_putstr(" - ");
              my_putnbr(tab[i]);
              my_putstr(" = ");
              my_putnbr(div);
              my_putchar('\n');
              return (1);
            }
        }
    }
  return (0);
}

int		lfdm(int *tab, int div, int limit)
{
  int		i;
  int		j;

  i = j = -1;
  while (tab[++i])
    {
      j = -1;
      while (tab[++j])
        {
          if ((div / tab[j]) == tab[i] && div % tab[j] == 0
              && i != j && i != limit && j != limit)
            {
              my_putnbr(tab[j]);
              my_putstr(" * ");
              my_putnbr(tab[i]);
              my_putstr(" = ");
              my_putnbr(div);
              my_putchar('\n');
              return (1);
            }
        }
    }
  return (0);
}

void		divider(t_data *data)
{
  data->i = data->j = -1;
  while (data->tab[++data->i])
    if ((data->result % data->tab[data->i] == 0) && data->tab[data->i] > 1)
      {
        data->div = data->result / data->tab[data->i];
        data->j = data->i;
      }
  data->i = -1;
  if (data->div)
    if (lfd(data->tab, data->div, data->j)
	|| lfds(data->tab, data->div, data->j)
	|| lfdm(data->tab, data->div, data->j))
      data->tab[0] = data->div;
  while (data->tab[++data->i])
    if (data->div == data->tab[data->i] && data->i != data->j)
      {
        my_putnbr(data->div);
        my_putstr(" * ");
        my_putnbr(data->tab[data->j]);
        my_putstr(" = ");
        my_putnbr(data->result);
        my_putstr("\nLe compte est bon !\n");
	exit(0);
      }
}
