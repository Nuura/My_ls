/*
** my_strncmp.c for  in /home/pierre/ccc/sanche_p/my_strncmp
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Mon Oct  3 19:19:18 2016 SANCHEZ Pierre
** Last update Thu Oct  6 11:50:55 2016 SANCHEZ Pierre
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	j;
  j = 0;
  while(s1[j] != 0 && s2[j] != 0 && s1[j] == s2[j] && j < n)
    {
      j++;
    }
  if (s1[j] > s2[j] && j < n)
    {
      return (1) ;
    }
  else if (s1[j] < s2[j] && j < n)
    {
      return (-1);
    }
  else
    {
      return (0);
    }
}
