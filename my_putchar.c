/*
** my_putchar.c for my_putchar in /home/ouranos27/my_desktop/PSU/PSU_2016_my_sokoban
** 
** Made by philippe kam
** Login   <philippe.kam@epitech.eu>
** 
** Started on  Tue Dec 20 15:44:05 2016 philippe kam
** Last update Tue Dec 20 15:44:59 2016 philippe kam
*/

#include "include/my_sokoban.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
