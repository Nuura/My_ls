#include <dirent.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int check_error(int arg, int i, char **argv, int argc, t_fold *s_fold)
{
	if (argv[arg][0] == '-')
		{
			if (argv[arg][1] == tab[i].argu && argv[arg][2] == '\0')
				{
					tab[i].state = 1;
					ls_d(argc, argv, arg);
					ls_R(arg, argv, s_fold);
					arg++;
					i = 0;
				}
			else if (tab[i].argu == '\0')
				{
					my_putstr("ls : option invalide -- '");
					my_putchar(argv[arg][1]);
					my_putstr("'\n");
					return 0;
				}
		}
	return 0;
}

int check_folder(t_fold *s_fold)
{
	DIR		*d;
	struct dirent *dir;
	struct stat file_info;
		
	d = opendir(".");
	if (d != NULL)
		{
			while ((dir = readdir(d)) != NULL)
				{
				   	if (dir->d_name[0] != '.')
						if (S_ISDIR(file_info.st_mode) == 0)
							{
								lstat(dir->d_name, &file_info);
								s_fold->str = malloc(sizeof(char) * my_strlen(dir->d_name));
								s_fold->str = dir->d_name;
								s_fold->next = s_fold;
							}
				}
			return 0;
		}
	return 1;
}

int display_dir(t_fold *s_fold)
{
	DIR *L;
	struct dirent *lol;
	
	my_putstr(s_fold->str);
	my_putstr("\n\n");
	my_putstr("./");
	my_putstr(s_fold->str);
	L = opendir(s_fold->str);
	if (L != NULL)
		{
			my_putstr("\n");
			while((lol = readdir(L)) != NULL)
				{
					my_putstr(lol->d_name);
					my_putstr("  ");
				}
			my_putstr("\n");
		}
	my_putstr("\n");
	return 0;
}
