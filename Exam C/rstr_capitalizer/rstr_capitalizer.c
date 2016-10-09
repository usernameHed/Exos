/*
** rstr_capitalizer.c for  in /home/exam/rendu/ex_1
** 
** Made by Exam User
** Login   <exam@epitech.net>
** 
** Started on  Fri Apr 24 10:22:05 2015 Exam User
** Last update Fri Apr 24 10:46:45 2015 Exam User
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	rstr(char **av)
{
  int	j;
  int	i;

  j = 0;
  i = 1;
  while (av[i])
    {
      while (av[i][j])
	{
	  if ((av[i][j] >= 'a' && av[i][j] <= 'z')
	      && (av[i][j + 1] == '\0'
		  || av[i][j + 1] == '\t'
		  || av[i][j + 1] == ' '))
	    my_putchar(av[i][j] - 32);
	  else if ((av[i][j] >= 'A' && av[i][j] <= 'Z')
              && (av[i][j + 1] != '\0'
                  && av[i][j + 1] != '\t'
                  && av[i][j + 1] != ' '))
	    my_putchar(av[i][j] + 32);
	  else
	    my_putchar(av[i][j]);
	  j++;
	}
      j = 0;
      my_putchar('\n');
      i++;
    }
}

int	main(int ac, char **av)
{
  if (ac == 1)
    my_putchar('\n');
  else
    rstr(av);
  return (0);
}
