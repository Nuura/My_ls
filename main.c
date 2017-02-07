#include <dirent.h>
#include <stdio.h>
#include "main.h"

int ls_lol(int argc, char **argv, int arg)
{
  if (argv[arg][1] == 'd')
    my_putchar('.');
  return 0;
}


int ls ()
{
  DIR		*d;
  struct dirent *dir;
       
  d = opendir(".");
  if (d != NULL)
    {
      while((dir = readdir(d)) != NULL)
	{
	  if (dir->d_name[0] != '.')
	    {
	      my_putstr(dir->d_name);
	      my_putchar('\t');
	    }
	}
      my_putchar('\n');
      closedir(d);
    }
  return 0;
}

int get_argument(int argc, char **argv)
{
  int i;
  int arg;
	
  i = 0;
  arg = 1;
  if (argc >= 2 && argv[arg][0] == '-')
    {
      while (tab[i] != '\0' && arg < argc)
	{
	  if (argv[arg][1] == tab[i] && argv[arg][2] == '\0')
	    {
	      my_putstr(argv[arg]);
	      my_putchar('\n');
	      ls_lol(argc, argv, arg);
	      arg++;
	      i = 0;
	    }
	  else if (tab[i + 1] == '\0')
	    {
	      my_putstr("ls : option invalide -- '");
	      my_putchar(argv[arg][1]);
	      my_putstr("'\n");
	      return 0;
	    }
	  i++;
	}
    }
  else
    ls();
  return 0;
}


int	main (int argc, char **argv)
{
  get_argument(argc, argv);
  return 0;
}
