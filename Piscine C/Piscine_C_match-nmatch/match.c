/*
** match.c for  in /home/belfio_u/PISCINE/rendu/Piscine_C_match-nmatch
** 
** Made by ugo belfiore
** Login   <belfio_u@epitech.net>
** 
** Started on  Fri Oct 10 10:31:45 2014 ugo belfiore
** Last update Fri Oct 10 22:19:58 2014 ugo belfiore
*/

int	match(char *s1, char *s2)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (s1[i + a] == s2[i] || s2[i] == '*')
    {
      if (s1[i + a] == s2[i])
	i++;
      if (s2[i] == '*')
	{
	  while (s2[i + 1] != s1[i + a] && s2[i + 1] != '*')
	    {
	      if (s1[i + a] == '\0')
		return (0);
	      a++;
	    }
	  a--;
	}
      i++;
      if (s1[i + a] == '\0' && s2[i] == s1[i + a - 1])
	return (1);
    }
  return(0);
}
