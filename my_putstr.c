/*
** my_putstr.c for my_putstr.c in /home/pipolm.pk/CPool_Day04
** 
** Made by Philippe KAM
** Login   <pipolm.pk@epitech.net>
** 
** Started on  Fri Oct  7 10:12:44 2016 Philippe KAM
** Last update Tue Dec 20 17:52:26 2016 philippe kam
*/

#include "include/my_sokoban.h"

int	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
  return (0);
}
