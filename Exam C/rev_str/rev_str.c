/*
** ulstr.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Jun  5 09:37:49 2015 Exam User
** Last update Fri Jun  5 09:56:11 2015 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	rev(char *av)
{
  int	i;

  i = 0;
  while (av[i] != '\0')
    i++;
  i--;
  while (i >= 0 && av[i])
    {
      my_putchar(av[i]);
      i--;
    }
}

int	main(int ac, char **av)
{
  if (ac == 1)
    my_putchar(10);
  else
    {
      rev(av[1]);
      my_putchar(10);
    }
  return (0);
}
