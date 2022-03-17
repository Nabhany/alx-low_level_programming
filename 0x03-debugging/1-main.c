To https://github.com/Nabhany/alx-low_level_programming.git
   d14846f..a10b21c  master -> master
root@b53b574eb676:/alx-low_level_programming/0x03-debugging# vi 1-main.c        
#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
/*        int i; */

        printf("Infinite loop incoming :(\n");
/*
*        i = 0;
*
*        while (i < 10)
*        {
*                      putchar(i);
*       }
*/
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}

