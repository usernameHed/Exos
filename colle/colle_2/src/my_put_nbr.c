#include "colle.h"

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= 10)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
}
