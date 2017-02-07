/*
** my_strstr.c for  in /home/pierre/ccc/sanche_p/my_strstr
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Tue Oct  4 11:11:40 2016 SANCHEZ Pierre
** Last update Thu Oct  6 11:11:40 2016 SANCHEZ Pierre
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      j = 0;
      if (str[i] == to_find[j])
	{
	  while (str[i + j] == to_find[j])
	    {
	      j++;
	      if (to_find[j] == '\0')
		{
		  return (&str[i]) ;
		}
	    }
	}
      i++;
    }
  return (0) ;
  }
