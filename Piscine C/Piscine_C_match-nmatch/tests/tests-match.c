/*
** tests-match.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_match-nmatch/tests
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Oct 10 10:33:13 2014 ugo belfiore
** Last update Sun Oct 12 20:02:50 2014 ugo belfiore
*/

int	main(int ac, char **av)
{
  if (av[1] == 0 || av[2] == 0)
    {
      av[1] = "cuteness";
      av[2] = "cut*ness";
    }
  my_put_nbr(match(av[1], av[2]));
  return (0);
}
