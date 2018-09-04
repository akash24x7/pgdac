#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fdr;

    fdr=open("test.txt",O_RDWR | O_APPEND | O_CREAT ,S_IRWXU | S_IRWXU | S_IRWXU);

    if(-1 == fdr)
    {
        perror("Error");
    }
    else
    {
        write(fdr,"Hello",5);
    }
    close(fdr);
    return 0;
}