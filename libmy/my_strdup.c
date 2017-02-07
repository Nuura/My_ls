/*
** strdup.c for  in /home/pierre/c7/sanche_p/my_strdup
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Mon Oct  3 12:33:03 2016 SANCHEZ Pierre
** Last update Wed Oct  5 10:04:29 2016 SANCHEZ Pierre
*/
#include <stdlib.h>

int	my_strlen(char *str);  //Longueur de la chaine de caractere

char	*my_strcpy(char *dest, char *src);  //Copie chaine de caractere

char	*my_strdup(char *str)
{
  int	i;
  char	*dest;
  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  dest = malloc((my_strlen(str) + 1) * sizeof(*str));
  my_strcpy(dest, str);
  return (dest) ;
}
