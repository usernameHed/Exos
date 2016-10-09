/*
** ulstr.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Jun  5 09:37:49 2015 Exam User
** Last update Fri Jun  5 09:42:58 2015 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	ul(char *av)
{
  int	i;

  i = 0;
  while (av[i] != '\0')
    {
      if (av[i] >= 'a' && av[i] <= 'z')
	my_putchar(av[i] - 32);
      else if (av[i] >= 'A' && av[i] <= 'Z')
	my_putchar(av[i] + 32);
      else
	my_putchar(av[i]);
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac == 1)
    my_putchar(10);
  else
    {
      ul(av[1]);
      my_putchar(10);
    }
  return (0);
}
