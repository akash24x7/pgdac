#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd1,fd2,fdr;
    unsigned char buffer[1024];

    fd1 = open("source.txt",O_RDONLY,S_IRUSR);

    if(-1 == fd1)
    {
        perror("Error");
    }
    else
    {
        fdr = read(fd1, buffer, 1024);

        if(-1 == fdr)
        {
            perror("Error");
        }
        else
        {
            fd2 = open("destination.txt",O_WRONLY | O_CREAT,S_IRWXU | S_IRGRP | S_IROTH);
            
            if(-1 == fd2)
            {
                perror("Error");
            }
            else
            {
                write(fd2, buffer, strlen(buffer));
            }
        }
    }
    close(fd1);
    close(fd2);
    close(fdr);

  return 0;  
}