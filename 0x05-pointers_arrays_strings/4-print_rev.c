#include <stdio.h>
#include <string.h>
#include "main.h" 

/** 
* print_rev - prints a string in stdout in reverse 
* @s: string to print 
* 
* Return: void 
*/ 
 void print_rev(char *s) 
 {
      int len = strlen(s); 
      while (len --) 
              putchar(*(s + len));
   putchar(10); 
        } 
        
