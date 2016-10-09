/*
** main.c for  in /home/belfio_u/rendu/rush_and_colle/COLLE/colle_1
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue Apr 28 14:25:53 2015 ugo belfiore
** Last update Tue Apr 28 17:10:29 2015 ugo belfiore
*/

#include "colle.h"

void	test_good_mod(t_dataa *d, int i, int j)
{
  if (d->tab[i].result_mod_inv[j] == d->result)
    {
      my_putnbr(d->tab[i + (j + 1)].num);
      my_putstr(" % ");
      my_putnbr(d->tab[i].num);
      my_putstr(" = ");
      my_putnbr(d->tab[i].result_mod_inv[j]);
      my_putstr("\nLe compte est bon !\n");
      exit(0);
    }
  if (d->tab[i].result_mod[j] == d->result)
    {
      my_putnbr(d->tab[i].num);
      my_putstr(" % ");
      my_putnbr(d->tab[i + (j + 1)].num);
      my_putstr(" = ");
      my_putnbr(d->tab[i].result_mod[j]);
      my_putstr("\nLe compte est bon !\n");
      exit(0);
    }
}

void	test_good_sub(t_dataa *d, int i, int j)
{
  if (d->tab[i].result_sou[j] == d->result)
    {
      my_putnbr(d->tab[i].num);
      my_putstr(" - ");
      my_putnbr(d->tab[i + (j + 1)].num);
      my_putstr(" = ");
      my_putnbr(d->tab[i].result_sou[j]);
      my_putstr("\nLe compte est bon !\n");
      exit(0);
    }
  if (d->tab[i].result_add[j] == d->result)
    {
      my_putnbr(d->tab[i].num);
      my_putstr(" + ");
      my_putnbr(d->tab[i + (j + 1)].num);
      my_putstr(" = ");
      my_putnbr(d->tab[i].result_add[j]);
      my_putstr("\nLe compte est bon !\n");
      exit(0);
    }
}

void	test_good_bis(t_dataa *d, int i, int j)
{
  if (d->tab[i].result_div_inv[j] == d->result)
    {
      my_putnbr(d->tab[i + (j + 1)].num);
      my_putstr(" / ");
      my_putnbr(d->tab[i].num);
      my_putstr(" = ");
      my_putnbr(d->tab[i].result_div_inv[j]);
      my_putstr("\nLe compte est bon !\n");
      exit(0);
    }
  if (d->tab[i].result_sou_inv[j] == d->result)
    {
      my_putnbr(d->tab[i + (j + 1)].num);
      my_putstr(" - ");
      my_putnbr(d->tab[i].num);
      my_putstr(" = ");
      my_putnbr(d->tab[i].result_sou_inv[j]);
      my_putstr("\nLe compte est bon !\n");
      exit(0);
    }
    test_good_mod(d, i, j);
    test_good_sub(d, i, j);
}

void	test_good(t_dataa *d, int i, int j)
{
  if (d->tab[i].result_mult[j] == d->result)
    {
      my_putnbr(d->tab[i].num);
      my_putstr(" * ");
      my_putnbr(d->tab[i + (j + 1)].num);
      my_putstr(" = ");
      my_putnbr(d->tab[i].result_mult[j]);
      my_putstr("\nLe compte est bon !\n");
      exit(0);
    }
  if (d->tab[i].result_div[j] == d->result)
    {
      my_putnbr(d->tab[i].num);
      my_putstr(" / ");
      my_putnbr(d->tab[i + (j + 1)].num);
      my_putstr(" = ");
      my_putnbr(d->tab[i].result_div[j]);
      my_putstr("\nLe compte est bon !\n");
      exit(0);
    }
    test_good_bis(d, i, j);
}
