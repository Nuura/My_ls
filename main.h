#ifndef _MAIN_H_
#define _MAIN_H_
/*#include <sys/types.h>
  #include <sys/stat.h>*/
#include <unistd.h>


int get_argument(int argc, char *argv[]);
void    my_putstr(char *str);
void    my_put_nbr(int n);
void my_putchar(char c);
int check_error(int arg, int i, char **argv, int argc);
int ls_d(int argc, char **argv, int arg);
int ls_R (int arg, char **argv);
int check_folder();

typedef struct s_ls
{
	char argu;
	int state;
}         t_ls;
t_ls tab[8];

typedef struct s_fold
{
	char *str;
	struct s_fold *next;
}	t_fold;

#endif
