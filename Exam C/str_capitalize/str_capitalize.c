/*
** str_capitalize.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Apr 10 10:10:58 2015 Exam User
** Last update Fri Apr 10 10:21:35 2015 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	str(char *av)
{
  int	i;
  int	test;

  i = 0;
  test = 0;
  if (!av[0])
    return;
  while (av[i] && av[i] == ' ')
    i++;
  if (av[i] >= 'a' && av[i] <= 'z')
    {
      my_putchar(av[i] - 32);
      i++;
    }
  while (av[i])
    {
      if (av[i] == ' ' || av[i] == '\t')
	{
	  my_putchar(av[i]);
	  test = 1;
	}
      else
	{
	  if (test == 1)
	    {
	      my_putchar(av[i] - 32);
	      test = 0;
	    }
	  else
	    my_putchar(av[i]);
	}
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac != 2)
    my_putchar(10);
  else
    {
      str(av[1]);
      my_putchar(10);
    }
  return (0);
}
