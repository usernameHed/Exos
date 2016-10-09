/*
** calculator.c for  in /home/belfio_u/Hed/colle/colle_2
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Tue May  5 14:08:58 2015 ugo belfiore
** Last update Tue May  5 18:29:25 2015 ugo belfiore
*/

#include "colle.h"

int	main(int ac, char **av)
{
  if (ac == 2)
    calculator(av[1]);
  return (0);
}
