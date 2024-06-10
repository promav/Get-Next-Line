#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    int fd1;
    int fd2;
    int fd3;
    int fd4;
    char *line;

    fd1 = open("texto1", O_RDONLY);
    fd2 = open("texto2", O_RDONLY);
    fd3 = open("texto3", O_RDONLY);
    fd4 = open("texto4", O_RDONLY);
    if(fd1 < 0)
        return 0;
    if(fd2 < 0)
        return 0;
    if(fd3 < 0)
        return 0;
    if(fd4 < 0)
        return 0;
    line = ft_strdup("");
    int i = 1;
    while(i < 100)
    {
        
        line = get_next_line(fd1);
       if(line)
        {
            printf("%i %s",i, line);
            free(line);
        }
        line = get_next_line(fd2);
        if(line)
        {
            printf("%i %s",i, line);
            free(line);
        }
        line = get_next_line(fd3);
        if(line)
        {
            printf("%i %s",i, line);
            free(line);
        }
        line = get_next_line(fd4);
         if(line)
        {
            printf("%i %s",i, line);
            free(line);
        }
        i++; 
    }
    close(fd1);
    close(fd2);
    close(fd3);
    close(fd4);
    free(line);
    return 0;
}