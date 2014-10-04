/*
** main.c for my_select in /home/boell_g/projets/my_select
** 
** Made by guillaume boell
** Login   <boell_g@epitech.net>
** 
** Started on  Fri Jan  6 14:21:53 2012 guillaume boell
** Last update Sat Jun  2 14:11:13 2012 antoine knockaert
*/
#include <unistd.h>
#include <string.h>
#include "../rt.h"

int			main(int argc, char **argv)
{
  if (argc >= 2)
    {
	if (strcmp(argv[1], "raytrace") == 0)
	  go_rayt(argv[2]);
	else if (strcmp(argv[1], "pathtrace") == 0)
	  go_patht(argv[2], argv[3] != NULL ? atoi(argv[3]) : 30);
    }
  else
    my_putstr("Usage : ./rt [raytrace|pathtrace] [scene filename] [pathtracing quality]\n");
  return (0);
}
