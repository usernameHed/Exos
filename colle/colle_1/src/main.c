/*
** main.c for  in /home/fenass_b/Colles/Chiffres
** 
** Made by benjamin fenasse
** Login   <fenass_b@epitech.net>
** 
** Started on  Tue Apr 28 14:14:28 2015 benjamin fenasse
** Last update Tue Apr 28 17:06:30 2015 ugo belfiore
*/

#include "chiffres.h"
#include "colle.h"

void		make_num(int ac, char **av)
{
  t_data	data;
  int		i;
  int		j;

  i = -1;
  j = 1;
  data.result = my_getnbr(av[1]);
  if ((data.tab = malloc(sizeof(int) * ac - 1)) == NULL)
    return ;
  while (av[++j])
    data.tab[++i] = my_getnbr(av[j]);
  data.tab[++i] = 0;
  data.div = 0;
  divider(&data);
}

int		main(int ac, char **av)
{
  if (ac < 3)
    {
      my_putstr("Usage : ./des_chiffres_et_des_chiffres");
      my_putstr(" NB_SEARCHED [NB_USED...]\n");
      return (0);
    }
  else
    {
      make_num(ac, av);
      make_brute(ac, av);
    }
  return (0);
}
