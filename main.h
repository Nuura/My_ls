#ifndef _MAIN_H_
#define _MAIN_H_
/*#include <sys/types.h>
  #include <sys/stat.h>*/
#include <unistd.h>

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
}   t_fold;

int		get_argument(int argc, char *argv[], t_fold *s_fold);
void    my_putstr(char *str);
void    my_put_nbr(int n);
void	my_putchar(char c);
int		my_strlen(char *str);
int		check_error(int arg, int i, char **argv, int argc, t_fold *s_fold);
int		ls_d(int argc, char **argv, int arg);
int		ls_R (int arg, char **argv, t_fold *s_fold);
int		check_folder(t_fold *s_fold);
void tri();
int is_dir(t_fold *s_fold);

#endif
