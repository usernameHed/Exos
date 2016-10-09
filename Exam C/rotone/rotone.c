/*
** ulstr.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Jun  5 09:37:49 2015 Exam User
** Last update Fri Jun  5 09:48:08 2015 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	rotone(char *av)
{
  int	i;

  i = 0;
  while (av[i] != '\0')
    {
      if ((av[i] >= 'a' && av[i] < 'z') || (av[i] >= 'A' && av[i] < 'Z'))
	my_putchar(av[i] + 1);
      else if (av[i] == 'Z')
	my_putchar('A');
      else if (av[i] == 'z')
	my_putchar('a');
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
      rotone(av[1]);
      my_putchar(10);
    }
  return (0);
}
