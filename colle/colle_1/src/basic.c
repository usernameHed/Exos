/*
** basic.c for  in /home/fenass_b/Colles/Chiffres
** 
** Made by benjamin fenasse
** Login   <fenass_b@epitech.net>
** 
** Started on  Tue Apr 28 16:47:53 2015 benjamin fenasse
** Last update Tue Apr 28 17:27:32 2015 ugo belfiore
*/

#include "chiffres.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = -1;
  while (str[++i]);
  write(1, str, i);
}

int		my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  if (nb >= 10)
    {
      my_putnbr(nb / 10);
      my_putchar('0'+ nb % 10);
    }
  else
    my_putchar('0' + nb);
  return (0);
}

int		my_getnbr(char *str)
{
  int		ret;
  int		sign;
  int		i;

  i = -1;
  sign = 1;
  ret = 0;
  if (!str)
    return (0);
  while (str[++i] && (str[i] == '-' || str[i] == '+'))
    if (str[i] == '-')
      sign *= -1;
  --i;
  while (str[++i])
    {
      if (str[i] >= 48 && str[i] <= 57)
        ret += (str[i] - 48);
      ret *= 10;
    }
  ret /= 10;
  return (ret * sign);
}
