#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>


int main()
{
    int fd1, fd2;

    fd1 = open("foo.txt", O_RDONLY|O_CREAT, 0);
    close(fd1);
    fd2 = open("baz.txt", O_RDONLY|O_CREAT, 0);
    printf("fd2 = %d\n", fd2);
    exit(0);

}