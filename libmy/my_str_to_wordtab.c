/*
** my_str_to_wordtab.c for  in /home/pierre/c7/sanche_p/my_str_to_wordtab
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Wed Oct  5 04:11:41 2016 SANCHEZ Pierre
** Last update Thu Oct  6 16:34:29 2016 SANCHEZ Pierre
*/
#include <stdlib.h>

int	alphanum(char c) //Carac alpha num
{
  if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') ||( c >= 'A' && c <= 'Z'))
    {
      return(0);
    }
  else
    {
       return(1);
    }
}

int	size (char *str) // Tailles des mots
{
  int	i;
  i = 0;
  while (alphanum(str[i]) == 0)
    {
      i++;
	}
  return (i) ;
  
}

int	countmot (char *str) //compte mot
{
  int	i;
  int	countw;
  i = 0;
  countw = 0;

  while (str[i] != '\0')
  {
      if (alphanum(str[i]) == 0)
      {
	  while (alphanum(str[i]) == 0)
	{
	      i++;
	      countw++;
	}
      }
    i++;
    }
    return(countw) ;
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
   int	i;
   int	j;
   int	mot;
   i = 0;
   j = 0;
   mot = 0;

   tab = malloc(countmot(str) * (sizeof(*tab + 1)));
  while (str[i] != 0)
    {
      while (alphanum(str[i]) == 1)
	     i++;
      tab[mot] = malloc((sizeof(**tab) + 1) * (size(&str[i])));
	j = 0;
	while(alphanum(str[i]) == 0)
	    {
	      tab[mot][j] = str[i];
	      
	      i++;
	      j++;
	    }
	  tab[mot][j] = '\0';
	  mot++;
	}
      tab[mot] = '\0';
      return (tab) ;
}
