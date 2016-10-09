/*
** brutforce.c for  in /home/belfio_u/rendu/rush_and_colle/COLLE/colle_1
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Apr 28 16:50:04 2015 ugo belfiore
** Last update Tue Apr 28 17:33:44 2015 ugo belfiore
*/

#include "colle.h"

static void	save_result_bis(t_dataa *d, int i, int j)
{
  d->tab[i].result_mult[j] = d->tab[i].num * d->tab[i + (j + 1)].num;
  if (d->tab[i + (j + 1)].num != 0)
    d->tab[i].result_div[j] = d->tab[i].num / d->tab[i + (j + 1)].num;
  if (d->tab[i].num != 0)
    d->tab[i].result_div_inv[j] = d->tab[i + (j + 1)].num / d->tab[i].num;
  d->tab[i].result_add[j] = d->tab[i].num + d->tab[i + (j + 1)].num;
  d->tab[i].result_sou[j] = d->tab[i].num - d->tab[i + (j + 1)].num;
  d->tab[i].result_sou_inv[j] = d->tab[i + (j + 1)].num - d->tab[i].num;
  if (d->tab[i + (j + 1)].num != 0)
    d->tab[i].result_mod[j] = d->tab[i].num % d->tab[i + (j + 1)].num;
  if (d->tab[i].num != 0)
    d->tab[i].result_mod_inv[j] = d->tab[i + (j + 1)].num % d->tab[i].num;
}

static void	save_result(t_dataa *d)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (i < d->ac)
    {
      j = 0;
      while (j < d->ac - (i + 1))
        {
          save_result_bis(d, i, j);
          test_good(d, i, j);
          j++;
        }
      i++;
    }
}

static void	test_malloc(t_dataa *d, int i)
{
  if ((d->tab[i - 1].result_mult = malloc(sizeof(int) * d->ac - i)) == NULL
      || (d->tab[i - 1].result_div = malloc(sizeof(int) * d->ac - i)) == NULL
      || (d->tab[i - 1].result_add = malloc(sizeof(int) * d->ac - i)) == NULL
      || (d->tab[i - 1].result_sou = malloc(sizeof(int) * d->ac - i)) == NULL
      || (d->tab[i - 1].result_mod = malloc(sizeof(int) * d->ac - i)) == NULL
      || (d->tab[i - 1].result_mod_inv
          = malloc(sizeof(int) * d->ac - i)) == NULL
      || (d->tab[i - 1].result_div_inv
          = malloc(sizeof(int) * d->ac - i)) == NULL
      || (d->tab[i - 1].result_sou_inv
          = malloc(sizeof(int) * d->ac - i)) == NULL
      )
    my_putstr("can't perform malloc !\n");
}

void		make_brute(int ac, char **av)
{
  t_dataa	d;
  int		i;
  int		j;

  if ((d.tab = malloc(sizeof(t_list) * ac - 2)) == NULL)
    my_putstr("can't perform malloc !\n");
  i = 1;
  d.ac = ac - 2;
  d.result = my_getnbr(av[i]);
  while (i < ac - 1)
    {
      d.tab[i - 1].num = my_getnbr(av[i + 1]);
      d.tab[i - 1].statement = 0;
      test_malloc(&d, i);
      j = 0;
      while (j < (ac - 1) - i)
	{
	  d.tab[i - 1].result_add[j] = 0;
	  j++;
	}
      i++;
    }
  save_result(&d);
}
