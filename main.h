#ifndef _MAIN_H_
#define _MAIN_H_
/*#include <sys/types.h>
  #include <sys/stat.h>*/
#include <unistd.h>


char tab[9] = {'l', 'R', 'r', 'd', 't', 'a', 'A', 'L', '\0'};
	
void get_argument(int argc, char *argv[]);
void    my_putstr(char *str);
void    my_put_nbr(int n);
/*int fstat(int filedes, struct stat *buf);*/

#endif
