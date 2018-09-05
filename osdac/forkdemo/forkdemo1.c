#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
    int p;
    
    p = fork();
    
    if (p>0)
        {
            fork();
            printf("Fork Demo\n");
        }

    printf("Fork Demo\n");
    
    return 0;
}
