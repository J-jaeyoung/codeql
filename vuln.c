#include <stdio.h>
#include <unistd.h>

int main(void)
{
    char buf[0x10];

    puts("hello world!");

    read(0, buf, 0x100);
    write(0, buf, 0x10);

    return 0;
}
