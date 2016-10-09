/*
** calcule_inter_para.c for  in /home/belfio_u/Hed/colle/colle_2/src
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May  5 15:18:41 2015 ugo belfiore
** Last update Tue May  5 17:55:02 2015 ugo belfiore
*/

#include "colle.h"

static void	calcule_num(t_data *d, char *tmp)
{
  int		k;
  int		tmp_current;
  int		tmp_current_c;

  k = 0;
  tmp_current = 0;
  tmp_current_c = 0;
  if (d->start == 1)
    {
      d->tab[k] = d->tab[k] *= -1;
      tmp_current_c++;
    }
}

static void	tab_number(t_data *d, char *tmp)
{
  if (tmp[d->i] >= '0' && tmp[d->i] <= '9')
    {
      d->little[d->j] = tmp[d->i];
      d->j++;
    }
  else
    {
      if (d->i != 0)
	{
	  d->tab_c[d->current_c] = tmp[d->i];
	  d->little[d->j] = '\0';
	  d->j = 0;
	  d->tab[d->current] = my_getnbr(d->little);
	  d->current++;
	  d->current_c++;
	}
      else
	{
	  d->tab_c[d->current_c] = tmp[d->i];
	  d->current_c++;
	  d->start = 1;
	}
    }
}

char		*calcule_inter_para(char *tmp)
{
  t_data	d;

  d.i = 0;
  d.start = 0;
  d.little = malloc(sizeof(char) * my_strlen(tmp) + 1);
  d.calc = malloc(sizeof(char) * my_strlen(tmp) + 1);
  d.tab_c = malloc(sizeof(char) * my_strlen(tmp) + 1);
  d.tab = malloc(sizeof(int) * my_strlen(tmp) + 1);
  d.j = 0;
  d.current = 0;
  d.current_c = 0;
  while (tmp[d.i] != '\0')
    {
      tab_number(&d, tmp);
      d.i++;
    }
  d.little[d.j] = '\0';
  d.tab[d.current] = my_getnbr(d.little);
  d.tab_c[d.current_c] = '\0';
  calcule_num(&d, tmp);
  return (d.calc);
}
