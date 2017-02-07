
/*
** my_strcpm.c for  in /home/pierre/ccc/sanche_p/my_strcmp
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Mon Oct  3 16:41:55 2016 SANCHEZ Pierre
** Last update Thu Oct  6 11:51:23 2016 SANCHEZ Pierre
*/
int	my_strcmp(char *s1, char *s2)
{
  int	j;
  j = 0;
  while(s1[j] != 0 && s2[j] != 0 && s1[j] == s2[j])
    {
      j++;
    }
  if (s1[j] > s2[j])
    {
      return (1) ;
    }
  else if (s1[j] < s2[j])
    {
      return (-1);
    }
  else
    {
      return (0);
    }
}
