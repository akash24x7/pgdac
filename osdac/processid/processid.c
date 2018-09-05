#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int pid1,pid2;

    pid1 = getpid();
    pid2 = getppid();

    printf("Process ID: %d\nParent Process ID: %d\n",pid1,pid2);
    return 0;
}
