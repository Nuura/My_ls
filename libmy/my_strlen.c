/*
** my_strlen.c for  in /home/pierre/d/sanche_p/my_strlen
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Wed Sep 28 10:34:31 2016 SANCHEZ Pierre
** Last update Wed Oct  5 10:05:06 2016 SANCHEZ Pierre
*/
int	my_strlen(char *str)
{
  int	i;
  i = 0;
  while (*(str + i) != '\0')
    {
	i++;
    }
  return (i) ;
}
