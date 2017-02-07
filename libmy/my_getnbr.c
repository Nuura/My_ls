/*
** my_getnbr.c for  in /home/pierre/c4/sanche_p/my_getnbr
** 
** Made by SANCHEZ Pierre
** Login   <sanche_p@etna-alternance.net>
** 
** Started on  Tue Oct  4 17:33:03 2016 SANCHEZ Pierre
** Last update Thu Oct  6 11:35:47 2016 SANCHEZ Pierre
*/

int	my_getnbr(char *str)
{
  int	sign;
  int	i;
  int	nombre;
  nombre = 0;
  i = 0;  //nombre recu
  sign = 1; 
    while (*str == '-' || *str == '+') // se charde du signe
    {
      if (*str == '-')
	sign = -sign;
	  str = str + 1;
	  }
   if ((str[0] < '0' || str[0] > '9') && (str[0] != '-' && str[0] != '+'))
     {
       nombre = 0;
     }
   while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0') //exclude les autres
    {
    if ( str[0] == '-')
      nombre = nombre * 10 + (str[i] - 48);
    nombre = nombre * 10 + (str[i] - 48);
      i++; 
    }
    return (nombre * sign) ;
}
