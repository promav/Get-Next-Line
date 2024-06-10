#include "get_next_line.h"
#include <stdio.h>

int main(void)
{
    int fd;
    //char *line;

    fd = open("42", O_RDONLY);
    if(fd < 0)
        return 0;
    //line = get_next_line(fd);
    int i = 1;
    printf("%i %s",i, get_next_line(fd));
    /*while(line)
    {
        printf("%i %s",i, line);
        line = get_next_line(fd);
        i++;
    }*/
    close(fd);
    //free(line);
    return 0;
}